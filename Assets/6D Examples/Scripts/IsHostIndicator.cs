﻿/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsHostIndicator : MonoBehaviour
{

    public AutoNetworkManager autoNetworkManager;

    public GameObject isHostPicLandScape;

    public GameObject isClientPicLandScape;

    public GameObject isHostPicPortrait;

    public GameObject isClientPicPortrait;

    public bool debug;

    void Update()
    {
        if (debug && autoNetworkManager.startedClient)
        {
            if (!autoNetworkManager.isHost)
            {
                if (Screen.orientation == ScreenOrientation.Portrait || Screen.orientation == ScreenOrientation.PortraitUpsideDown)
                {
                    isClientPicPortrait.SetActive(true);
                    isHostPicPortrait.SetActive(false);
                }
                else
                {
                    isClientPicLandScape.SetActive(true);
                    isHostPicLandScape.SetActive(false);
                }
            }
            else
            {
                if (Screen.orientation == ScreenOrientation.Portrait || Screen.orientation == ScreenOrientation.PortraitUpsideDown)
                {
                    isClientPicPortrait.SetActive(false);
                    isHostPicPortrait.SetActive(true);
                }
                else
                {
                    isClientPicLandScape.SetActive(false);
                    isHostPicLandScape.SetActive(true);
                }
            }
        }
    }
}
