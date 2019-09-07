/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

using System;
using System.Text;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;

namespace SixDegrees
{
    public class SDPlugin : MonoBehaviour
    {
        public static bool IsSDKReady
        {
            get
            {
                return (int)SDState.Running == SixDegreesSDK_GetState();
            }
        }
        public static string LocationID = "";
        public static string Version = "";

        public enum SDState
        {
            Stopped = 0,
            Initializing = 1,
            Running = 2,
            Disabled = 3
        };

        public enum SDTrackingQuality
        {
            None = 0,
            Limited = 1,
            Good = 2
        };

        public enum SDSaveState
        {
            None = 0,
            Positioning = 1,
            Packaging = 2,
            Uploading = 3,
            DoneSuccess = 4,
            DoneFailed = 5,
            DoneCancelled = 6
        };

        public enum SDSaveError
        {
            None = 0,
            Unknown = 1,
            NotEnoughSpace = 2,
            Offline = 3,
            CloudNotAvailable = 4,
            NotAuthorized = 5,
            LocationNotAvailable = 6,
            NoLocationMapData = 7
        };

        public enum SDLoadState
        {
            None = 0,
            Positioning = 1,
            Downloading = 2,
            Relocalizing = 3,
            DoneSuccess = 4,
            DoneFailed = 5,
            DoneCancelled = 6
        };

        public enum SDLoadError
        {
            None = 0,
            Unknown = 1,
            NotEnoughSpace = 2,
            Offline = 3,
            CloudNotAvailable = 4,
            NotAuthorized = 5,
            LocationNotAvailable = 6,
            DataNotAvailable = 7,
            FailedToRelocalize = 8
        };

#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        public static extern void SixDegreesSDK_GetVersion(StringBuilder versionOut, int bufferSize);

        [DllImport("__Internal")]
        public static extern bool SixDegreesSDK_IsDeviceSupported();

        [DllImport("__Internal")]
        public static extern int SixDegreesSDK_GetState();

        [DllImport("__Internal")]
        public static extern bool SixDegreesSDK_Initialize();

        [DllImport("__Internal")]
        public static unsafe extern bool SixDegreesSDK_InitializeWithEAGL(void* eaglContext);

        [DllImport("__Internal")]
        public static extern bool SixDegreesSDK_Stop();

        [DllImport("__Internal")]
        public static extern IntPtr SixDegreesSDK_GetBackgroundTexture();

        [DllImport("__Internal")]
        public static extern int SixDegreesSDK_GetEAGLBackgroundTexture();

        [DllImport("__Internal")]
        public unsafe static extern void SixDegreesSDK_GetBackgroundTextureSize(int* widthOut, int* heightOut);

        [DllImport("__Internal")]
        public unsafe static extern int SixDegreesSDK_GetPose(float* poseDataOut, int bufferSize);

        [DllImport("__Internal")]
        public unsafe static extern void SixDegreesSDK_GetProjection(float* projectionDataOut, int bufferSize);

        [DllImport("__Internal")]
        public static extern void SixDegreesSDK_GetLocationId(StringBuilder locationIdOut, int bufferSize);

        [DllImport("__Internal")]
        public static extern long SixDegreesSDK_SaveToARCloud();

        [DllImport("__Internal")]
        public static extern void SixDegreesSDK_RetrySaveToARCloud(long saveTime);

        [DllImport("__Internal")]
        public static extern void SixDegreesSDK_CancelSave(long saveTime);

        [DllImport("__Internal")]
        public unsafe static extern void SixDegreesSDK_GetSaveStatus(long saveTime, int* stateOut, int* errorOut, long* uploadSizeOut, float* uploadProgressOut);

        [DllImport("__Internal")]
        public static extern long SixDegreesSDK_LoadFromARCloud();

        [DllImport("__Internal")]
        public static extern void SixDegreesSDK_CancelLoad(long loadTime);

        [DllImport("__Internal")]
        public unsafe static extern void SixDegreesSDK_GetLoadStatus(long loadTime, int* stateOut, int* errorOut, long* downloadSizeOut, float* downloadProgressOut);

        [DllImport("__Internal")]
        public unsafe static extern int SixDegreesSDK_GetBlockMeshInfo(int* blockBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut);

        [DllImport("__Internal")]
        public static extern float SixDegreesSDK_GetMeshBlockSize();

        [DllImport("__Internal")]
        public unsafe static extern int SixDegreesSDK_GetBlockMesh(int* blockBuffer, float* vertexBuffer, int* faceBuffer, int blockBufferSize, int vertexBufferSize, int faceBufferSize);

        [DllImport("__Internal")]
        public static extern long SixDegreesSDK_SaveToARCloudLocation(StringBuilder customLocationId);

        [DllImport("__Internal")]
        public static extern long SixDegreesSDK_LoadFromARCloudLocation(StringBuilder customLocationId);

        [DllImport("__Internal")]
        public unsafe static extern int SixDegreesSDK_GetTexturedMeshInfo(int* textureBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut);

        [DllImport("__Internal")]
        public unsafe static extern int SixDegreesSDK_GetTexturedMesh(int* textureBuffer, float* vertexBuffer, int* faceBuffer, int textureBufferSize, int vertexBufferSize, int faceBufferSize);

        [DllImport("__Internal")]
        public static extern IntPtr SixDegreesSDK_GetMeshTexture(int textureId);

#else
        public static void SixDegreesSDK_GetVersion(StringBuilder versionOut, int bufferSize) { }
        public static bool SixDegreesSDK_IsDeviceSupported() { return false; }
        public static int SixDegreesSDK_GetState() { return 0; }
        public static bool SixDegreesSDK_Initialize() { return false; }
        public static bool SixDegreesSDK_Stop() { return false; }
        public static IntPtr SixDegreesSDK_GetBackgroundTexture() { return IntPtr.Zero; }
        public unsafe static void SixDegreesSDK_GetBackgroundTextureSize(int* widthOut, int* heightOut) { }
        public unsafe static int SixDegreesSDK_GetPose(float* poseDataOut, int bufferSize) { return 0; }
        public unsafe static void SixDegreesSDK_GetProjection(float* projectionDataOut, int bufferSize) { }
        public static void SixDegreesSDK_GetLocationId(StringBuilder locationIdOut, int bufferSize) { }
        public static long SixDegreesSDK_SaveToARCloud() { return -1; }
        public static void SixDegreesSDK_RetrySaveToARCloud(long saveTime) { }
        public static void SixDegreesSDK_CancelSave(long saveTime) { }
        public unsafe static void SixDegreesSDK_GetSaveStatus(long saveTime, int* stateOut, int* errorOut, long* uploadSizeOut, float* uploadProgressOut) { }
        public static long SixDegreesSDK_LoadFromARCloud() { return -1; }
        public static void SixDegreesSDK_CancelLoad(long loadTime) { }
        public unsafe static void SixDegreesSDK_GetLoadStatus(long loadTime, int* stateOut, int* errorOut, long* downloadSizeOut, float* downloadProgressOut) { }
        public unsafe static int SixDegreesSDK_GetBlockMeshInfo(int* blockBufferSizeOut, int* vertexBufferSizeOut, int* indexBufferSizeOut) { return -1; }
        public static float SixDegreesSDK_GetMeshBlockSize() { return 0.0f; }
        public unsafe static int SixDegreesSDK_GetBlockMesh(int* blockBuffer, float* vertexBuffer, int* indexBuffer, int blockBufferSize, int vertexBufferSize, int indexBufferSize) { return 0; }
        public static long SixDegreesSDK_SaveToARCloudLocation(StringBuilder customLocationId) { return -1; }
        public static long SixDegreesSDK_LoadFromARCloudLocation(StringBuilder customLocationId) { return -1; }
        public unsafe static int SixDegreesSDK_GetTexturedMeshInfo(int* textureBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut) { return -1; }
        public unsafe static int SixDegreesSDK_GetTexturedMesh(int* textureBuffer, float* vertexBuffer, int* faceBuffer, int textureBufferSize, int vertexBufferSize, int faceBufferSize) { return 0;}
        public static IntPtr SixDegreesSDK_GetMeshTexture(int textureId) { return IntPtr.Zero; }
#endif

    }
}