/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SixDegrees;

public class FeedBackMessages : MonoBehaviour
{
    public Text feedback;

    private AudioSource chime;

    private Coroutine clearCoroutine = null;

    public static FeedBackMessages FeedBackInstance = null;

    public bool showText;

    private SDKController sdkController;

    private Status status;


    void OnDisable()
    {
        feedback.text = "";
    }

    void OnEnable()
    {
        FeedBackInstance = this;
        sdkController = FindObjectOfType<SDKController>();
        status = FindObjectOfType<Status>();
        showText = status.toggle;
    }

    void Awake()
    {
        FeedBackInstance = this;
        sdkController = FindObjectOfType<SDKController>();
    }

    void Start()
    {
        chime = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (!sdkController.isStopped && showText)
        {
            feedback.text = "SDK State: " + (SDPlugin.SDState)SDPlugin.SixDegreesSDK_GetState() + "\n\n" +
            SDPlugin.Version + "\n\n" +
            "Load State: " + (SDPlugin.SDLoadState)sdkController.loadState + "\n\n" +
            "Error: " + (SDPlugin.SDLoadError)sdkController.loadError + "\n\n" +
            "Progress: " +  (int) sdkController.downloadProgress + "\n\n" +
            "Save State: " + (SDPlugin.SDSaveState)sdkController.saveState + "\n\n" +
            "Error: " + (SDPlugin.SDSaveError)sdkController.saveError + "\n\n" +
            "Progress: " + sdkController.uploadProgress + "\n\n" +
            "Location ID: " + SDPlugin.LocationID;
        }
    }

    public void ShowStatus(float seconds = 5f, bool playChime = false)
    {
        showText = true;
        if (clearCoroutine != null)
        {
            StopCoroutine(clearCoroutine);
        }
        clearCoroutine = null;

        if (playChime)
        {
            chime.Play();
        }

        if (seconds > 0f)
        {
            clearCoroutine = StartCoroutine(ClearStatusCoroutine(seconds));
        }
    }

    private IEnumerator ClearStatusCoroutine(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        feedback.text = "";
        showText = false;
        yield return null;
    }
}
