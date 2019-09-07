/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Text;
using System.Collections;
using SixDegrees;
using UnityEngine;
using System;
using UnityEngine.UI;

public class SDKController : MonoBehaviour
{
    [HideInInspector]
    public int saveState = (int)SDPlugin.SDSaveState.None;
    [HideInInspector]
    public int loadState = (int)SDPlugin.SDLoadState.None;
    [HideInInspector]
    public int saveError = (int)SDPlugin.SDSaveError.None;
    [HideInInspector]
    public int loadError = (int)SDPlugin.SDLoadError.None;
    [HideInInspector]
    public long uploadSize = -1;
    [HideInInspector]
    public float uploadProgress = -1;
    [HideInInspector]
    public long downloadSize = -1;
    [HideInInspector]
    public float downloadProgress = -1;
    [HideInInspector]
    public bool isStopped = false;

    private Coroutine activeCoroutine = null;

    public event Action OnSaveSucceededEvent;

    public event Action OnLoadSucceededEvent;

    public event Action<int> OnSaveErrorEvent;

    public event Action<int> OnLoadErrorEvent;

    public event Action OnFindingLocationEvent;

    public event Action OnUploadingEvent;

    public event Action OnDownloadingEvent;

    public event Action OnRelocalizingEvent;

    public event Action OnCancelledEvent;

    public long timeStamp = -1;

    public Text debugText;

    bool saving;

    bool loading;

    public void Awake()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        Application.targetFrameRate = 60;
        if (SDPlugin.SixDegreesSDK_GetState() == (int)SDPlugin.SDState.Stopped)
        {
            Initialize();
        }
    }

    public void Initialize()
    {
        StringBuilder sb = new StringBuilder(16);
        SDPlugin.SixDegreesSDK_GetVersion(sb, sb.Capacity);
        SDPlugin.Version = sb.ToString();

        Debug.Log("Will initialize SDK v" + SDPlugin.Version);
        bool initializing;
#if UNITY_IOS && !UNITY_EDITOR
        if (SystemInfo.graphicsDeviceType == UnityEngine.Rendering.GraphicsDeviceType.OpenGLES3) 
        {
            unsafe
            {
                initializing = SDPlugin.SixDegreesSDK_InitializeWithEAGL(null);
            }
        }
        else
#endif
        {
            initializing = SDPlugin.SixDegreesSDK_Initialize();
        }

        if (!initializing)
        {
            Debug.Log("Failed to initialize SDK. Check logs for more information.");
        }
        if (isStopped)
        {
            FindObjectOfType<SDBackcam>().enabled = true;
            FindObjectOfType<SDBackcam>().Awake();
            FindObjectOfType<SDBackcam>().SetupBackgroundTexture();
        }
    }

    public void OnDestroy()
    {
        if (SDPlugin.IsSDKReady && activeCoroutine != null)
        {
            StopCoroutine(activeCoroutine);
            activeCoroutine = null;

            SDPlugin.SixDegreesSDK_CancelLoad(timeStamp);
            SDPlugin.SixDegreesSDK_CancelSave(timeStamp);

            OnCancelledEvent();
        }
    }

    public void Load()
    {
        if (!SDPlugin.IsSDKReady)
        {
            return;
        }

        Debug.Log("Will load location map data from AR Cloud");

        if (activeCoroutine != null)
        {
            StopCoroutine(activeCoroutine);
        }

        timeStamp = SDPlugin.SixDegreesSDK_LoadFromARCloud();
        activeCoroutine = StartCoroutine(LoadCoroutine());
    }

    public void Save()
    {
        if (!SDPlugin.IsSDKReady)
        {
            return;
        }

        Debug.Log("Will save location map data to AR Cloud");

        if (activeCoroutine != null)
        {
            StopCoroutine(activeCoroutine);
        }

        timeStamp = SDPlugin.SixDegreesSDK_SaveToARCloud();
        activeCoroutine = StartCoroutine(SaveCoroutine());
    }

    private void UpdateSaveStatus()
    {
        unsafe
        {
            fixed (int* saveStatePtr = &saveState, saveErrorPtr = &saveError)
            {
                fixed (long* uploadSizePtr = &uploadSize)
                {
                    fixed (float* uploadProgessPtr = &uploadProgress)
                    {
                        SDPlugin.SixDegreesSDK_GetSaveStatus(timeStamp, saveStatePtr, saveErrorPtr, uploadSizePtr, uploadProgessPtr);
                    }
                }
            }
        }
    }

    private IEnumerator SaveCoroutine()
    {
        saveState = (int)SDPlugin.SDSaveState.None;

        yield return new WaitForSeconds(0.1f);

        saving = true;
        while (saving)
        {
            UpdateSaveStatus();

            switch (saveState)
            {
                case (int)SDPlugin.SDSaveState.DoneFailed:
                case (int)SDPlugin.SDSaveState.DoneSuccess:
                case (int)SDPlugin.SDSaveState.DoneCancelled:
                    saving = false;
                    break;

                case (int)SDPlugin.SDSaveState.Positioning:
                    if (OnFindingLocationEvent != null)
                    {
                        OnFindingLocationEvent();
                    }
                    break;

                case (int)SDPlugin.SDSaveState.Uploading:
                    if (OnUploadingEvent != null)
                    {
                        OnUploadingEvent();
                    }
                    break;

                default:
                    break;
            }

            yield return null;
        }

        if (saveState == (int)SDPlugin.SDSaveState.DoneSuccess)
        {
            StringBuilder sb = new StringBuilder(16);
            SDPlugin.SixDegreesSDK_GetLocationId(sb, sb.Capacity);
            SDPlugin.LocationID = sb.ToString();
            if (OnSaveSucceededEvent != null)
            {
                OnSaveSucceededEvent();
            }
        }
        else if (saveState == (int)SDPlugin.SDSaveState.DoneFailed)
        {
            if (OnSaveErrorEvent != null)
            {
                OnSaveErrorEvent(saveError);
            }
        }

        yield return null;
        activeCoroutine = null;
    }

    private void UpdateLoadStatus()
    {
        unsafe
        {
            fixed (int* loadStatePtr = &loadState, loadErrorPtr = &loadError)
            {
                fixed (long* downloadSizePtr = &downloadSize)
                {
                    fixed (float* downloadProgressPtr = &downloadProgress)
                    {
                        SDPlugin.SixDegreesSDK_GetLoadStatus(timeStamp, loadStatePtr, loadErrorPtr, downloadSizePtr, downloadProgressPtr);
                    }
                }
            }
        }
    }

    private IEnumerator LoadCoroutine()
    {
        loadState = (int)SDPlugin.SDLoadState.None;

        yield return new WaitForSeconds(0.1f);

        loading = true;
        while (loading)
        {
            UpdateLoadStatus();

            switch (loadState)
            {
                case (int)SDPlugin.SDLoadState.DoneFailed:
                case (int)SDPlugin.SDLoadState.DoneSuccess:
                case (int)SDPlugin.SDLoadState.DoneCancelled:
                    loading = false;
                    break;

                case (int)SDPlugin.SDLoadState.Positioning:
                    if (OnFindingLocationEvent != null)
                    {
                        OnFindingLocationEvent();
                    }
                    break;

                case (int)SDPlugin.SDLoadState.Downloading:
                    if (OnDownloadingEvent != null)
                    {
                        OnDownloadingEvent();
                    }
                    break;

                case (int)SDPlugin.SDLoadState.Relocalizing:
                    if (OnRelocalizingEvent != null)
                    {
                        OnRelocalizingEvent();
                    }
                    break;

                default:
                    break;
            }

            yield return null;
        }

        if (loadState == (int)SDPlugin.SDLoadState.DoneSuccess)
        {
            StringBuilder sb = new StringBuilder(16);
            SDPlugin.SixDegreesSDK_GetLocationId(sb, sb.Capacity);
            SDPlugin.LocationID = sb.ToString();
            if (OnLoadSucceededEvent != null)
            {
                OnLoadSucceededEvent();
            }
        }
        else if (loadState == (int)SDPlugin.SDLoadState.DoneFailed)
        {
            if (OnLoadErrorEvent != null)
            {
                OnLoadErrorEvent(loadError);
            }
        }

        yield return null;
        activeCoroutine = null;
    }

    public void RetrySave()
    {
        if (timeStamp == -1 || !SDPlugin.IsSDKReady)
        {
            return;
        }
        else
        {
            Debug.Log("Will retry saving location map data to AR Cloud");
            if (activeCoroutine != null)
            {
                StopCoroutine(activeCoroutine);
            }
            SDPlugin.SixDegreesSDK_RetrySaveToARCloud(timeStamp);
            activeCoroutine = StartCoroutine(SaveCoroutine());
        }
    }

    public void Cancel()
    {
        if (activeCoroutine != null)
        {
            if (saving)
            {
                SDPlugin.SixDegreesSDK_CancelSave(timeStamp);
                UpdateSaveStatus();
            }
            if (loading)
            {
                SDPlugin.SixDegreesSDK_CancelLoad(timeStamp);
                UpdateLoadStatus();
            }
        }
    }

    public void Stop()
    {
        isStopped = SDPlugin.SixDegreesSDK_Stop();
        Texture2D.DestroyImmediate(FindObjectOfType<SDBackcam>().background.mainTexture, true);
        FindObjectOfType<SDBackcam>().enabled = false;
    }
}
