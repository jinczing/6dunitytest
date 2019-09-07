/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectorBehaviour : MonoBehaviour
{
    public GameObject sphere;

    public float offset = .45f;

    void LateUpdate()
    {
        if (sphere != null)
        {
            this.transform.position = new Vector3(sphere.transform.position.x, sphere.transform.position.y + offset, sphere.transform.position.z);
        }
        else
        {
            Destroy(this.gameObject.GetComponent<Projector>());
            Destroy(this.gameObject);
        }
    }
}
