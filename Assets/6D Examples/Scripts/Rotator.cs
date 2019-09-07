/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System;
using UnityEngine;

public class Rotator : MonoBehaviour
{
    public float speed = 1.0f;

	void Update () 
	{
        transform.Rotate(Vector3.up, speed * Time.deltaTime);
	}
}

