/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using SixDegrees;

public class PlayerCameraPosition : NetworkBehaviour
{
    private GameObject mSDCamera;

    void Start()
    {
        if (isLocalPlayer)
        {
            SDCamera sdCamera = FindObjectOfType<SDCamera>();
            if (!sdCamera)
            {
                Debug.LogWarning("No SDCamera found!");
                return;
            }

            mSDCamera = sdCamera.gameObject;
        }
    }

    void Update()
    {
        if (isLocalPlayer && mSDCamera)
        {
            transform.SetPositionAndRotation(mSDCamera.transform.position, mSDCamera.transform.rotation);
        }
    }
}
