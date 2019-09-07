/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class EnableWhenNetworkReady : MonoBehaviour
{
    public List<GameObject> objectsToEnable;

    public AutoNetworkManager autoNetworkManager;

    public void Start()
    {
        if (autoNetworkManager != null)
        {
            autoNetworkManager.OnConnectionEvent += SetActive;
            foreach (GameObject objectToEnable in objectsToEnable)
            {
                objectToEnable.SetActive(false);
            }
        }
    }

    public void SetActive()
    {
        foreach (GameObject objectToEnable in objectsToEnable)
        {
            objectToEnable.SetActive(true);
        }
    }
}
