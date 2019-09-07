/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Text;
using System.IO;
using SixDegrees;
using Scenes;
using System.Runtime.InteropServices;

public class AssetSaver : MonoBehaviour
{

#if UNITY_IOS
    [DllImport("__Internal")]
    public static extern void GetAPIKey(StringBuilder apiKey, int bufferSize);
#else
    public static void GetAPIKey(StringBuilder apiKey, int bufferSize) { }
#endif

    private static AssetSaver _Instance = null;
    public static AssetSaver Instance
    {
        get
        {
            return _Instance;
        }
    }
    private string apiKey;

    private string filename;

    public FileControl fileControl;

    public SDKController sdkController;

    public GameObject littleLogo;

    public GameObject mediumLogo;

    public GameObject bigLogo;

    void Start()
    {
        _Instance = this;
        sdkController.OnSaveSucceededEvent += SaveCSV;
        sdkController.OnLoadSucceededEvent += RetrieveFile;
    }

    public void SaveCSV()
    {
        GetFilename();

        if (string.IsNullOrEmpty(filename))
        {
            Debug.Log("Error evaluating the filename, will not save content CSV");
            return;
        }

        string filePath = GetPath();
        StreamWriter writer = new StreamWriter(filePath);
        writer.WriteLine(littleLogo.transform.position.x + "," + littleLogo.transform.position.y + "," + littleLogo.transform.position.z);
        writer.WriteLine(mediumLogo.transform.position.x + "," + mediumLogo.transform.position.y + "," + mediumLogo.transform.position.z);
        writer.WriteLine(bigLogo.transform.position.x + "," + bigLogo.transform.position.y + "," + bigLogo.transform.position.z);
        writer.Flush();
        writer.Close();
        fileControl.scene = SceneCase.BasicSample;
        StartCoroutine(fileControl.UploadFileCoroutine(filename));
    }
    
    public void ReadTextFile(string csv)
    {
        StringReader reader = new StringReader(csv);
        string line = reader.ReadLine();
        string[] parts = line.Split(',');
        Vector3 logoposition = new Vector3();
        logoposition.x = float.Parse(parts[0]);
        logoposition.y = float.Parse(parts[1]);
        logoposition.z = float.Parse(parts[2]);
        littleLogo.transform.position = logoposition;
        line = reader.ReadLine();
        parts = line.Split(',');
        logoposition.x = float.Parse(parts[0]);
        logoposition.y = float.Parse(parts[1]);
        logoposition.z = float.Parse(parts[2]);
        mediumLogo.transform.position = logoposition;
        line = reader.ReadLine();
        parts = line.Split(',');
        logoposition.x = float.Parse(parts[0]);
        logoposition.y = float.Parse(parts[1]);
        logoposition.z = float.Parse(parts[2]);
        bigLogo.transform.position = logoposition;
    }

    public string GetPath()
    {
        return Application.persistentDataPath + "/" + SDPlugin.LocationID + ".csv";
    }

    public void RetrieveFile()
    {
        GetFilename();

        if (string.IsNullOrEmpty(filename))
        {
            Debug.Log("Error evaluating the filename, will not load content CSV");
            return;
        }

        StartCoroutine(fileControl.GetTextCoroutine(filename));
    }

    private void GetFilename()
    {
        if (string.IsNullOrEmpty(apiKey))
        {
            StringBuilder sb = new StringBuilder(32);
            GetAPIKey(sb, 32);
            apiKey = sb.ToString();
        }

        if (string.IsNullOrEmpty(apiKey))
        {
            Debug.Log("API Key cannot be found");
            filename = "";
        }

        if (string.IsNullOrEmpty(SDPlugin.LocationID))
        {
            Debug.Log("Location ID is missing");
            filename = "";
        }

        filename = apiKey + "-" + SDPlugin.LocationID;
    }

}
