/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using SixDegrees;

public class InitializationCheck : MonoBehaviour
{
#if UNITY_IOS && !UNITY_EDITOR
    [DllImport("__Internal")]
    public static extern void GetAPIKey(StringBuilder apiKey, int bufferSize);
#else
    public static void GetAPIKey(StringBuilder apiKey, int bufferSize) { }
#endif
    public Text initializationText;

    void Awake()
    {
        if (SDPlugin.SixDegreesSDK_IsDeviceSupported() == false)
        {
            initializationText.text = "Sorry, this device is unsupported Cannot initialize SixDegreesSDK";
        }
        StringBuilder sb = new StringBuilder(32);
        GetAPIKey(sb, 32);
        string apiKey = sb.ToString();
        if (string.IsNullOrEmpty(apiKey))
        {
            initializationText.text = "API Key is empty. Make sure you have valid API Keys in your plist file";
        }
    }
}
