/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallBehaviour : MonoBehaviour
{

    public BallLaunch ballLaunch;

	public float maxBallDistance = 30.0f;

    private Camera mainCamera;

    void Start()
    {
        ballLaunch = FindObjectOfType<BallLaunch>();
        mainCamera = Camera.main;
    }

    void Update()
    {
        if (Vector3.Distance(this.transform.position, mainCamera.gameObject.transform.position) > maxBallDistance)
        {
            ballLaunch.DestroyBall(this.gameObject);
        }
    }
}
