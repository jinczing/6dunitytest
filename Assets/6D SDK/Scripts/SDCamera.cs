﻿/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System;
using System.Collections;
using UnityEngine;

namespace SixDegrees
{
    public class SDCamera : MonoBehaviour
    {
        private float[] mPoseBuffer = new float[16];
        [HideInInspector]
        public int mTrackingState = 0;
        private Camera mCamera;
        private ScreenOrientation mScreenOrientation;

        void Awake()
        {
            mCamera = GetComponent<Camera>();

            if (!mCamera)
            {
                Debug.LogWarning("SDCamera must be attached to a camera object!");
                return;
            }

            mScreenOrientation = ScreenOrientation.AutoRotation;
            mCamera.rect = SDCameraUtils.GetCameraRect(1920, 1080);
            mCamera.enabled = true;
            mPoseBuffer[0] = 1;
            mPoseBuffer[5] = 1;
            mPoseBuffer[10] = 1;
            mPoseBuffer[15] = 1;
        }

        unsafe void UpdatePose()
        {
            fixed (float* ptr = &mPoseBuffer[0])
            {
                // R T
                // 0 1
                int bufferSize = 16;
                mTrackingState = SDPlugin.SixDegreesSDK_GetPose(ptr, bufferSize);
            }

            switch (mTrackingState)
            {
                case (int)SDPlugin.SDTrackingQuality.Good:
                case (int)SDPlugin.SDTrackingQuality.Limited:
                {
                    Matrix4x4 mat = new Matrix4x4();
                    for (int col = 0; col < 4; col++)
                    {
                        for (int row = 0; row < 4; row++)
                        {
                            // Column major order
                            mat[row, col] = mPoseBuffer[col * 4 + row];
                        }
                    }

                    // Transform the matrix from 6D right-handed coordinates to Unity left-handed coordinates
                    // By flipping the sign of Z
                    mat[0, 2] = -mat[0, 2];
                    mat[1, 2] = -mat[1, 2];
                    mat[2, 0] = -mat[2, 0];
                    mat[2, 1] = -mat[2, 1];
                    mat[2, 3] = -mat[2, 3];

                    Vector3 position = mat.GetColumn(3);

                    Vector3 forward;
                    Vector3 upwards;

                    switch(Screen.orientation)
                    {
                        case ScreenOrientation.LandscapeRight:
                        forward = mat.GetColumn(2);
                        upwards = -mat.GetColumn(1);
                        break;
                        case ScreenOrientation.Portrait:
                        forward = mat.GetColumn(2);
                        upwards = -mat.GetColumn(0);
                        break;
                        case ScreenOrientation.PortraitUpsideDown:
                        forward = mat.GetColumn(2);
                        upwards = mat.GetColumn(0);
                        break;
                        default:
                        case ScreenOrientation.LandscapeLeft:
                        forward = mat.GetColumn(2);
                        upwards = mat.GetColumn(1);
                        break;
                    }
                    Quaternion rotation = Quaternion.LookRotation(forward, upwards);
                    transform.SetPositionAndRotation(position, rotation);

                    break;
                }
                case (int)SDPlugin.SDTrackingQuality.None:
                default:
                {
                    break;
                }
            }
        }

        void UpdateCamera()
        {
            // enable the camera, update its rect and replace its default projection matrix
            int width = 1920;
            int height = 1080;
            unsafe
            {
                int* widthPtr = &width, heightPtr = &height;
                SDPlugin.SixDegreesSDK_GetBackgroundTextureSize(widthPtr, heightPtr);
            }

            mCamera.rect = SDCameraUtils.GetCameraRect(width, height);
            mCamera.projectionMatrix = SDCameraUtils.GetProjectionMatrix();
            mScreenOrientation = Screen.orientation;
        }

        void Update()
        {
            if (!SDPlugin.IsSDKReady)
            {
                return; // will try later
            }

            // Very important to reset the framebuffer
            GL.InvalidateState();

            UpdatePose();

            if (mCamera.enabled ? (mScreenOrientation != Screen.orientation) 
                                : (mTrackingState == (int)SDPlugin.SDTrackingQuality.Good))
            {
                UpdateCamera();
            }
        }

        void PrintTrackingInfo()
        {
            String msg = "Tracking State " + mTrackingState;
            msg += "\n" + mPoseBuffer[0] + " " + mPoseBuffer[4] + " " + mPoseBuffer[8] + " " + mPoseBuffer[12]
                + "\n" + mPoseBuffer[1] + " " + mPoseBuffer[5] + " " + mPoseBuffer[9] + " " + mPoseBuffer[13]
                + "\n" + mPoseBuffer[2] + " " + mPoseBuffer[6] + " " + mPoseBuffer[10] + " " + mPoseBuffer[14]
                + "\n" + mPoseBuffer[3] + " " + mPoseBuffer[7] + " " + mPoseBuffer[11] + " " + mPoseBuffer[15];
            Debug.Log("Camera Pose Update: " + msg);
        }
    }
}
