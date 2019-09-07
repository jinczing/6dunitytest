/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using UnityEngine;
using System.Collections;
using Mirror;
using UnityEngine.UI;
using System;

public class AutoNetworkManager : NetworkManager
{
    public LANBroadcastService service;

    public bool isHost = false;

    public bool startedClient = false;

    public event Action OnConnectionEvent;

    public SDKController sdkController;

    public void Start()
    {
#if UNITY_EDITOR
        this.gameObject.SetActive(false);
#elif UNITY_IOS
        SetUp();
#endif
    }

    public void SetUp()
    {
        LANBroadcastService.delStartServer h1 = MakeServer;
        LANBroadcastService.delJoinServer h2 = JoinServer;
        service.StartSearchBroadCasting(h2, h1);
    }

    public void JoinServer(String ip)
    {
        base.networkAddress = ip;
        base.StartClient();
    }


    public void MakeServer()
    {
        service.StartAnnounceBroadCasting();
        base.StartHost();
        isHost = true;
    }

    public void MakeServerCellular()
    {
        base.StartHost();
        isHost = true;
    }

    public override void OnStartHost()
    {
        Debug.Log("Starting Host");
        isHost = true;
    }

    public override void OnStopHost()
    {
        Debug.Log("Stopping Host");
        isHost = false;
    }

    public override void OnStartClient(NetworkClient client)
    {
        startedClient = true;
        Debug.Log("Starting Client, isHost:" + isHost);
        if (OnConnectionEvent != null)
        {
            OnConnectionEvent();
        }
    }

    public override void OnStopClient()
    {
        if (!isHost)
        {
            service.StopBroadCasting();
            SetUp();
        }
    }

    public override void OnDestroy()
    {
        service.StopBroadCasting();
        NetworkManager.Shutdown();
    }
}

