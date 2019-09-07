/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Mirror;

public class LoadOnClick : MonoBehaviour
{
    public GameObject NetworkManagerGameObject;

    public void LoadScene(int level)
    {
        SceneManager.LoadSceneAsync(level, LoadSceneMode.Single);
    }
    public void DestroyNetwork()
    {
        NetworkManagerGameObject.GetComponent<LANBroadcastService>().StopBroadCasting();
        Destroy(NetworkManagerGameObject);
        NetworkManager.Shutdown();
    }
}