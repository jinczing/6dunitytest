/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;

public class LANBroadcastService : MonoBehaviour
{
    public delegate void delJoinServer(string strIP); 
    public delegate void delStartServer(); 
    private enum enuState { NotActive, Searching, Announcing }; 
    private struct ReceivedMessage { public float fTime; public string strIP; public bool bIsReady; } 

    private string strMessage = ""; 
    private enuState currentState = enuState.NotActive;
    public UdpClient objUDPClient; 
    private List<ReceivedMessage> lstReceivedMessages; 
    private delJoinServer delWhenServerFound; 
    private delStartServer delWhenServerMustStarted; 
    private string strServerNotReady = "wanttobeaserver"; 
    private string strServerReady = "iamaserver"; 
    private float fTimeLastMessageSent;
    private float fIntervalMessageSending = 1f; 
    private float fTimeMessagesLive = 3; 
    private float fTimeToSearch = 5; 
    private float fTimeSearchStarted;

    public string Message { get { return strMessage; } } 

    public static IPEndPoint clientIP;

    void Start()
    {
        // Create our list
        lstReceivedMessages = new List<ReceivedMessage>();
    }

    void Update()
    {
        if ((currentState == enuState.Searching || currentState == enuState.Announcing)
            && Time.time > fTimeLastMessageSent + fIntervalMessageSending)
        {
            byte[] objByteMessageToSend = System.Text.Encoding.ASCII.GetBytes(currentState == enuState.Announcing ? strServerReady : strServerNotReady);
            objUDPClient.Send(objByteMessageToSend, objByteMessageToSend.Length, new IPEndPoint(IPAddress.Broadcast, 22043));
            fTimeLastMessageSent = Time.time;

            if (currentState == enuState.Searching)
            {
                bool bLoopedAll = false;
                while (!bLoopedAll && lstReceivedMessages.Count > 0)
                {
                    foreach (ReceivedMessage objMessage in lstReceivedMessages)
                    {
                        if (Time.time > objMessage.fTime + fTimeMessagesLive)
                        {
                            lstReceivedMessages.Remove(objMessage);
                            break;
                        }
                        if (lstReceivedMessages[lstReceivedMessages.Count - 1].Equals(objMessage)) bLoopedAll = true;
                    }
                }
            }
        }

        if (currentState == enuState.Searching)
        {
            foreach (ReceivedMessage objMessage in lstReceivedMessages)
            {
                if (objMessage.bIsReady)
                {
                    StopSearching();
                    strMessage = "We will join";
                    Debug.Log(strMessage);
                    delWhenServerFound(objMessage.strIP);
                    break;
                }
            }
            if (currentState == enuState.Searching && Time.time > fTimeSearchStarted + fTimeToSearch)
            {

                string strIPOfServer = IPManager.GetIP(ADDRESSFAM.IPv4); ;
                foreach (ReceivedMessage objMessage in lstReceivedMessages)
                {
                    if (ScoreOfIP(objMessage.strIP) > ScoreOfIP(strIPOfServer))
                    {
                        strIPOfServer = objMessage.strIP;
                    }
                }
                if (strIPOfServer == IPManager.GetIP(ADDRESSFAM.IPv4))
                {
                    StopSearching();
                    strMessage = "We will start server.";
                    Debug.Log(strMessage);

                    delWhenServerMustStarted();
                }
                else
                {
                    strMessage = "Found server. Waiting for server to get ready...";
                    Debug.Log(strMessage);

                    lstReceivedMessages.Clear();
                    fTimeSearchStarted = Time.time;
                }
            }
        }

    }

    private void BeginAsyncReceive()
    {
        objUDPClient.BeginReceive(new AsyncCallback(EndAsyncReceive), null);
    }

    private void EndAsyncReceive(IAsyncResult objResult)
    {
        IPEndPoint objSendersIPEndPoint = new IPEndPoint(IPAddress.Any, 0);
        byte[] objByteMessage = objUDPClient.EndReceive(objResult, ref objSendersIPEndPoint);
        clientIP = objSendersIPEndPoint;
        if (objByteMessage.Length > 0 &&
            !objSendersIPEndPoint.Address.ToString().Equals(IPManager.GetIP(ADDRESSFAM.IPv4)))
        {
            string strReceivedMessage = System.Text.Encoding.ASCII.GetString(objByteMessage);
            ReceivedMessage objReceivedMessage = new ReceivedMessage();
            objReceivedMessage.fTime = Time.time;
            objReceivedMessage.strIP = objSendersIPEndPoint.Address.ToString();
            objReceivedMessage.bIsReady = strReceivedMessage == strServerReady ? true : false;
            lstReceivedMessages.Add(objReceivedMessage);
        }
        if (currentState == enuState.Searching) BeginAsyncReceive();
    }
    private void StartAnnouncing()
    {
        currentState = enuState.Announcing;
        strMessage = "Announcing we are a server...";
        Debug.Log(strMessage);

    }
    private void StopAnnouncing()
    {
        currentState = enuState.NotActive;
        strMessage = "Announcements stopped.";
        Debug.Log(strMessage);

    }
    private void StartSearching()
    {
        lstReceivedMessages.Clear();
        BeginAsyncReceive();
        fTimeSearchStarted = Time.time;
        currentState = enuState.Searching;
        strMessage = "Searching for other players...";
        Debug.Log(strMessage);

    }
    private void StopSearching()
    {
        currentState = enuState.NotActive;
        strMessage = "Search stopped.";
        Debug.Log(strMessage);

    }

    public void StartSearchBroadCasting(delJoinServer connectToServer, delStartServer startServer)
    {
        delWhenServerFound = connectToServer;
        delWhenServerMustStarted = startServer;
        StartBroadcastingSession();
        StartSearching();
    }
    public void StartAnnounceBroadCasting()
    {
        StartAnnouncing();
    }
    private void StartBroadcastingSession()
    {
        if (currentState != enuState.NotActive) StopBroadCasting();
        objUDPClient = new UdpClient(22043);
        objUDPClient.EnableBroadcast = true;
        fTimeLastMessageSent = Time.time;
    }
    // Method to be called by some other object (eg. a NetworkController) to stop this object doing any broadcast work and free resources.
    // Must be called before the game quits!
    public void StopBroadCasting()
    {
        if (currentState == enuState.Searching) StopSearching();
        else if (currentState == enuState.Announcing) StopAnnouncing();
        if (objUDPClient != null)
        {
            objUDPClient.Close();
            objUDPClient = null;
        }
    }
    // Method that calculates a 'score' out of an IP adress. This is used to determine which of multiple clients will be the server. Used by the script itself.
    private long ScoreOfIP(string strIP)
    {
        long lReturn = 0;
        string strCleanIP = strIP.Replace(".", "");
        lReturn = long.Parse(strCleanIP);
        return lReturn;
    }
}