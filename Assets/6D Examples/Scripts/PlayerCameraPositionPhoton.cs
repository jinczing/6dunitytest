/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SixDegrees;
using Photon;

public class PlayerCameraPositionPhoton : PunBehaviour
{
    private GameObject mSDCamera;

    void Start()
    {

        SDCamera sdCamera = FindObjectOfType<SDCamera>();
        if (!sdCamera)
        {
            Debug.LogWarning("No SDCamera found!");
            return;
        }

        mSDCamera = sdCamera.gameObject;
    }

    void Update()
    {
        if (mSDCamera)
        {
            transform.SetPositionAndRotation(mSDCamera.transform.position, mSDCamera.transform.rotation);
        }
    }
}
