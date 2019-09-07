/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class LoadOnClickPhoton : Photon.PunBehaviour
{
    public void LoadScene(int level)
    {
        SceneManager.LoadSceneAsync(level, LoadSceneMode.Single);
    }

    public void PunLeaveRoom()
    {
        if (PhotonNetwork.inRoom)
        {
            PhotonNetwork.LeaveRoom();
        }
        else
        {
            LoadScene(0);
        }
    }

    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        LoadScene(0);
    }
}