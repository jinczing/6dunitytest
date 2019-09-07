/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SixDegrees;

public class VersionNumber : MonoBehaviour
{
    public Text versionNumber;

    void Update()
    {
        if (SDPlugin.IsSDKReady && SDPlugin.Version != null)
        {
            versionNumber.text = "v" + SDPlugin.Version;
            this.enabled = false;
        }
    }
}
