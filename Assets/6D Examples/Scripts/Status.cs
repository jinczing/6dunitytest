/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SixDegrees;

public class Status : MonoBehaviour
{
    public SDKController sdkController;

    public GameObject cancelButtonL;

    public GameObject cancelButtonP;

    public GameObject saveButtonL;

    public GameObject loadButtonL;

    public GameObject saveButtonP;

    public GameObject loadButtonP;

    public bool toggle;

    void Start()
    {
        sdkController.OnSaveSucceededEvent += SaveSuccess;
        sdkController.OnLoadSucceededEvent += LoadSuccess;
        sdkController.OnSaveErrorEvent += SaveError;
        sdkController.OnLoadErrorEvent += LoadError;
        sdkController.OnFindingLocationEvent += FindingLocation;
        sdkController.OnUploadingEvent += Uploading;
        sdkController.OnDownloadingEvent += Downloading;
        sdkController.OnRelocalizingEvent += Relocalizing;
        sdkController.OnCancelledEvent += Cancelled;
    }

    void OnDestroy()
    {
        sdkController.OnSaveSucceededEvent -= SaveSuccess;
        sdkController.OnLoadSucceededEvent -= LoadSuccess;
        sdkController.OnSaveErrorEvent -= SaveError;
        sdkController.OnLoadErrorEvent -= LoadError;
        sdkController.OnFindingLocationEvent -= FindingLocation;
        sdkController.OnUploadingEvent -= Uploading;
        sdkController.OnDownloadingEvent -= Downloading;
        sdkController.OnRelocalizingEvent -= Relocalizing;
        sdkController.OnCancelledEvent -= Cancelled;
    }

    public void SaveSuccess()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
            ShowLoadSave();
        }
    }

    public void LoadSuccess()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus(5.0f, true);
            ShowLoadSave();
        }
    }
    public void SaveError(int saveError)
    {
        SDPlugin.SDSaveError error = (SDPlugin.SDSaveError)saveError;
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
            ShowLoadSave();
        }
    }

    public void LoadError(int loadError)
    {
        SDPlugin.SDLoadError error = (SDPlugin.SDLoadError)loadError;
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
            ShowLoadSave();
        }
    }

    public void FindingLocation()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
        }
    }
    public void Downloading()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
            ShowCancel();
        }
    }

    public void Uploading()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
            ShowCancel();
        }
    }

    public void Relocalizing()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
        }
    }

    public void Cancelled()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            FeedBackMessages.FeedBackInstance.ShowStatus();
        }
    }

    public void ToggleMessages()
    {
        if (FeedBackMessages.FeedBackInstance != null)
        {
            toggle = !toggle;
            FeedBackMessages.FeedBackInstance.showText = toggle;
            if (toggle == false)
            {
                FeedBackMessages.FeedBackInstance.ShowStatus(.01f, false);
            }
        }
    }

    public void ShowLoadSave()
    {
        saveButtonL.SetActive(true);
        loadButtonL.SetActive(true);
        saveButtonP.SetActive(true);
        loadButtonP.SetActive(true);
        cancelButtonL.SetActive(false);
        cancelButtonP.SetActive(false);
    }

    public void ShowCancel()
    {
        saveButtonL.SetActive(false);
        loadButtonL.SetActive(false);
        saveButtonP.SetActive(false);
        loadButtonP.SetActive(false);
        cancelButtonL.SetActive(true);
        cancelButtonP.SetActive(true);
    }
}
