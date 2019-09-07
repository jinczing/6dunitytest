/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class OrientationSwitcher : MonoBehaviour
{
    public GameObject landscapeUI;

    public GameObject portraitUI;

    void Update()
    {
        portraitUI.SetActive(false);
        landscapeUI.SetActive(true);

        //if (Screen.orientation == ScreenOrientation.Portrait || Screen.orientation == ScreenOrientation.PortraitUpsideDown)
        //{
        //    landscapeUI.SetActive(false);
        //    portraitUI.SetActive(true);
        //}
        //else
        //{
        //    portraitUI.SetActive(false);
        //    landscapeUI.SetActive(true);
        //}
    }
}
