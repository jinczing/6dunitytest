/*!
 @header SixDegreesSDK.h
 @copyright Copyright (C) 2018-2019 6degrees.xyz Inc.
 @abstract This file is part of the 6D.ai Beta SDK.
 @version beta 0.22.0
 @ignore API_METHOD
 */

#pragma once

#import <SixDegreesSDK/SixDegreesSDK_premium.h>

#define API_METHOD FOUNDATION_EXPORT __attribute__((visibility ("default")))

#import <UIKit/UIKit.h>
#import <ARKit/ARKit.h>

/*!
 @brief Populates versionOut with the current version number of the SDK, e.g. "0.1.0"
 @param versionOut pointer to a char buffer
 @param bufferSize size of the char buffer (recommended value: 16)
 */
API_METHOD void SixDegreesSDK_GetVersion(char* versionOut, int bufferSize);

/*!
 @brief Returns whether the device is supported by this SDK.
 @discussion Depth estimation and real world mesh building are resource-intensive processes that are
 enabled on the most powerful devices only. @link SixDegreesSDK_Initialize() @/link will fail if this
 returns false.
 @return true if the device is supported, false otherwise.
 */
API_METHOD bool SixDegreesSDK_IsDeviceSupported(void);

//! @brief Running state of the SDK.
enum SixDegreesState {
    //! The SDK was not initialized, or was stopped
    SixDegreesStateStopped = 0,
    //! The SDK is in the process of initializing
    SixDegreesStateInitializing = 1,
    //! The SDK is initialized and running
    SixDegreesStateRunning = 2,
    //! The SDK is disabled due to permission issues
    SixDegreesStateDisabled = 3,
};

/*!
 @brief Returns the internal running state of the SDK.
 @return the integer value of the current running state (@link SixDegreesState@/link).
 */
API_METHOD int SixDegreesSDK_GetState(void);

/*!
 @brief Initializes ARKit and the SDK's internal states using the Metal pipeline. Call this first!
 @discussion Most other API calls in this SDK will not work until you call this. Call only once!
 
 This API call returns early, use @link SixDegreesSDK_GetState() @/link to monitor initialization progress.
 
 Initialization will fail if the current device is not supported.
 Use @link SixDegreesSDK_IsDeviceSupported() @/link to check that the device is supported.
 @return true if the SDK is initializing, false if there is a problem (check the logs).
 */
API_METHOD bool SixDegreesSDK_Initialize(void);

/*!
 @brief Initializes ARKit and the SDK's internal states using the Metal pipeline. Call this first!
 @discussion Most other API calls in this SDK will not work until you call this. Call only once!
 
 This API call returns early, use @link SixDegreesSDK_GetState() @/link to monitor initialization progress.
 
 Initialization will fail if the current device is not supported.
 Use @link SixDegreesSDK_IsDeviceSupported() @/link to check that the device is supported.
 
 This API call is made available for expert users, others should use @link SixDegreesSDK_Initialize() @/link.
 @param configuration optional pointer to the ARWorldTrackingConfiguration object for ARKit.
 The following configuration options are required:
 - video format must be a multiple of 16:9
 - autofocus must be disabled
 - world alignment must be ARWorldAlignmentGravity
 The 6D.ai SDK will use a default configuration if the parameter is null.
 @return true if the SDK is initializing, false if there is a problem (check the logs).
 */
API_METHOD bool SixDegreesSDK_InitializeWithConfig(ARWorldTrackingConfiguration* configuration);

/*!
 @brief Initializes ARKit and the SDK's internal states using the OpenGL pipeline. Call this first!
 @discussion Most other API calls in this SDK will not work until you call this. Call only once!
 
 This API call returns early, use @link SixDegreesSDK_IsInitialized() @/link to monitor initialization progress.
 
 Initialization will fail if the current device is not supported.
 Use @link SixDegreesSDK_IsDeviceSupported() @/link to check that the device is supported.
 
 This API call is deprecated, we recommend you use Metal instead with @link SixDegreesSDK_Initialize() @/link.
 @param eaglContext optional pointer to the desired EAGLContext handle
 (The 6D.ai SDK will use the current one or create one if it is null).
 @return true if the SDK is initializing, false if there is a problem (check the logs).
 */
API_METHOD __attribute__((deprecated)) bool SixDegreesSDK_InitializeWithEAGL(void* eaglContext);

/*!
 @brief Returns true once the SDK is initialized.
 @discussion this API call is deprecated and will be removed from the SDK soon. Use @link SixDegreesSDK_GetState() @/link instead.
 @return true when the SDK is initialized and the other methods below are ready to be called.
 */
API_METHOD __attribute__((deprecated)) bool SixDegreesSDK_IsInitialized(void);

/*!
 @brief Shuts down ARKit and the SDK, then releases their memory.
 @return true if the SDK is shutting down, false if there is a problem (check the logs).
 */
API_METHOD bool SixDegreesSDK_Stop(void);

/*!
 @brief Returns the ARKit Session object managed by the SDK. Optional ARKit features enabled by @link SixDegreesSDK_InitializeWithConfig() @/link are accessible through this object.
 @discussion the ARSession pointer gives access, through the current ARFrame, to ARAnchor objects like planes
 and images, optionally enabled with @link SixDegreesSDK_InitializeWithConfig() @/link.
 
 Users should not change the delegate object or start and stop the session.
 
 This API call is made available for expert users.
 @return the ARSession pointer of the object managed by the SDK, null if none available.
 */
API_METHOD ARSession* SixDegreesSDK_GetARKitSession(void);

/*!
 @brief Populates poseDataOut with a column-major 4x4 matrix describing the transform from ARKit to world coordinates.
 @discussion Like ARKit, world coordinates assume Y is up (aligned with gravity), X is right and Z towards the user,
 relatively to the orientation of the device the first time the map was created.
 
 Use the output of this method to transform native ARKit transforms and coordinates (for instance, ARAnchor objects)
 to 6D.ai world coordinates.
 
 This API call is made available for expert users.
 @param transformDataOut pointer to the first element a float array of size 16.
 @param bufferSize must be 16.
 */
API_METHOD void SixDegreesSDK_GetARKitTransform(float* transformDataOut, int bufferSize);

/*!
 @brief Returns the Metal texture pointer of the camera background.
 @return the Metal texture pointer of the camera background, null if none available.
 */
API_METHOD void* SixDegreesSDK_GetBackgroundTexture(void);

/*!
 @brief Returns the OpenGL texture handle of the camera background.
 @return the OpenGL texture handle of the camera background, 0 if none available.
 */
API_METHOD __attribute__((deprecated)) int SixDegreesSDK_GetEAGLBackgroundTexture(void);

/*!
 @brief Populates widthOut and heightOut with the pixel size of the camera background texture, if available.
 @param widthOut the pointer to the width value.
 @param heightOut the pointer to the height value.
 */
API_METHOD void SixDegreesSDK_GetBackgroundTextureSize(int* widthOut, int* heightOut);

//! @brief Quality of the AR pose tracking system.
enum SixDegreesTrackingQuality {
    //! No pose available
    SixDegreesTrackingQualityNone = 0,
    //! Pose available, tracking is limited
    SixDegreesTrackingQualityLimited = 1,
    //! Pose available, tracking is good
    SixDegreesTrackingQualityGood = 2,
};

/*!
 @brief Populates poseDataOut with a column-major 4x4 matrix describing the position and orientation of the camera
 in world coordinates.
 @discussion World coordinates assume Y is up (aligned with gravity), X is right and Z towards the user, relatively
 to the orientation of the device the first time the map was created. World coordinates convention is used by ARKit,
 ARCore, OpenGL, SceneKit and others.
 @param poseDataOut pointer to the first element a float array of size 16.
 @param bufferSize must be 16.
 @return tracking quality (@link SixDegreesTrackingQuality@/link).
 */
API_METHOD int SixDegreesSDK_GetPose(float* poseDataOut, int bufferSize);

/*!
 @brief Populates projectionDataOut with a column-major 4x4 matrix describing the projection of the camera.
 @discussion Takes into account the pixel size of the background texture. Clipping planes are at 0.001 and 1000.0.
 @param projectionDataOut pointer to the first element float array of size 16.
 @param bufferSize must be 16.
 */
API_METHOD void SixDegreesSDK_GetProjection(float* projectionDataOut, int bufferSize);

/*!
 @brief Populates locationIdOut with the unique identifier of the location for which the current pose is applicable.
 @discussion locationIdOut will be populated with an empty string until:
 
 - location map data was loaded from the AR Cloud AND the device successfully relocalized;
 
 - or the location map data was successfully saved to the AR Cloud.
 
 It will then be populated with a unique location identifier, common to all users and sessions at this location.
 
 It guarantees the consistency of the coordinate system across time and devices, enabling persistence and multiplayer.
 @param locationIdOut pointer to the first element of a char array of size 16.
 @param bufferSize must be 16.
 */
API_METHOD void SixDegreesSDK_GetLocationId(char* locationIdOut, int bufferSize);

/*!
 @brief Persists the location map data to the 6D.ai AR Cloud.
 @discussion This API call returns early, use @link SixDegreesSDK_GetSaveStatus() @/link to monitor saving progress.
 @return save timestamp, to be used in other calls to control and monitor saving progress.
 */
API_METHOD int64_t SixDegreesSDK_SaveToARCloud(void);

/*!
 @brief Retries uploading a previously failed or cancelled SaveToARCloud process.
 @param saveTimestamp the timestamp returned by the initial call to @link SixDegreesSDK_SaveToARCloud() @/link.
 */
API_METHOD void SixDegreesSDK_RetrySaveToARCloud(int64_t saveTimestamp);

/*!
 @brief Interrupts and cancels the specified SaveToARCloud process.
 @param saveTimestamp the timestamp returned by the initial call to @link SixDegreesSDK_SaveToARCloud() @/link.
 */
API_METHOD void SixDegreesSDK_CancelSave(int64_t saveTimestamp);

//! @brief State of the SaveToARCloud process.
enum SixDegreesSaveState {
    //! SaveToARCloud() was never called.
    SixDegreesSaveStateNone = 0,
    //! Approximate GPS Position is being requested.
    SixDegreesSaveStatePositioning = 1,
    //! Location map data is being packaged.
    SixDegreesSaveStatePackaging = 2,
    //! Location map data is being transmitted to the AR Cloud.
    SixDegreesSaveStateUploading = 3,
    //! Location map data was saved successfully.
    SixDegreesSaveStateDoneSuccess = 4,
    //! Location map data could not be saved, check the error enum for details.
    SixDegreesSaveStateDoneFailed = 5,
    //! SaveARCloud() was interrupted by a call to CancelSave().
    SixDegreesSaveStateDoneCancelled = 6,
};

//! @brief Error in the SaveToARCloud process.
enum SixDegreesSaveError {
    //! SaveToARCloud() did not produce any errors.
    SixDegreesSaveErrorNone = 0,
    //! Placeholder for unknown and future errors.
    SixDegreesSaveErrorUnknown = 1,
    //! The device file system is too full to package the location map data.
    SixDegreesSaveErrorNotEnoughSpace = 2,
    //! The device is not connected to the Internet.
    SixDegreesSaveErrorOffline = 3,
    //! The AR Cloud cannot be reached.
    SixDegreesSaveErrorCloudNotAvailable = 4,
    //! The AR Cloud rejected the save request.
    SixDegreesSaveErrorNotAuthorized = 5,
    //! The device cannot approximate its location by GPS or Wi-Fi.
    SixDegreesSaveErrorLocationNotAvailable = 6,
    //! The device has no location map data to send to the AR Cloud.
    SixDegreesSaveErrorNoLocationMapData = 7,
};

/*!
 @brief Provides information about the specified SaveToARCloud process.
 @discussion Populates stateOut with the latest state code of the specified SaveToARCloud process,
 
 errorOut with an error code if applicable,
 
 uploadSizeOut with the size in bytes of the location map data if applicable,
 
 uploadProgressOut with the percentage progress of the upload, from 0 to 100.
 @param saveTimestamp the timestamp returned by the initial call to @link SixDegreesSDK_SaveToARCloud() @/link.
 @param stateOut optional pointer to the state value (@link SixDegreesSaveState@/link).
 @param errorOut optional pointer to the error value (@link SixDegreesSaveError@/link).
 @param uploadSizeOut optional pointer to the location map data size value.
 @param uploadProgressOut optional pointer to the upload progress percentage value.
 */
API_METHOD void SixDegreesSDK_GetSaveStatus(int64_t saveTimestamp, int* stateOut, int* errorOut, int64_t* uploadSizeOut, float* uploadProgressOut);

/*!
 @brief Loads the location map data from the 6D.ai AR Cloud.
 @discussion This API call returns early, use @link SixDegreesSDK_GetLoadStatus() @/link to monitor saving progress.
 @return load timestamp, to be used in other calls to control and monitor loading progress.
 */
API_METHOD int64_t SixDegreesSDK_LoadFromARCloud(void);

/*!
 @brief Interrupts and cancels the specified LoadFromARCloud process.
 @param loadTimestamp the timestamp returned by the initial call to @link SixDegreesSDK_LoadFromARCloud() @/link.
 */
API_METHOD void SixDegreesSDK_CancelLoad(int64_t loadTimestamp);

//! @brief State of the LoadFromARCloud process.
enum SixDegreesLoadState {
    //! LoadFromARCloud() was never called.
    SixDegreesLoadStateNone = 0,
    //! Approximate GPS Position is being requested.
    SixDegreesLoadStatePositioning = 1,
    //! Location map data is being received and unpackaged from the AR Cloud.
    SixDegreesLoadStateDownloading = 2,
    //! Location map data is being used to relocalize the device at this location.
    SixDegreesLoadStateRelocalizing = 3,
    //! Location map data was successfully loaded and the device relocalized.
    SixDegreesLoadStateDoneSuccess = 4,
    //! Location map data could not be loaded, or the device could not relocalize, check the error enum for details.
    SixDegreesLoadStateDoneFailed = 5,
    //! LoadFromARCloud() was interrupted by a call to CancelLoad().
    SixDegreesLoadStateDoneCancelled = 6,
};

//! @brief Error in the LoadFromARCloud process.
enum SixDegreesLoadError {
    //! LoadFromARCloud() did not produce any errors.
    SixDegreesLoadErrorNone = 0,
    //! Placeholder for unknown and future errors.
    SixDegreesLoadErrorUnknown = 1,
    //! The device file system is too full to download and unpackage the location map data.
    SixDegreesLoadErrorNotEnoughSpace = 2,
    //! The device is not connected to the Internet.
    SixDegreesLoadErrorOffline = 3,
    //! The AR Cloud cannot be reached.
    SixDegreesLoadErrorCloudNotAvailable = 4,
    //! The AR Cloud rejected the load request.
    SixDegreesLoadErrorNotAuthorized = 5,
    //! The device cannot approximate its location by GPS or Wi-Fi.
    SixDegreesLoadErrorLocationNotAvailable = 6,
    //! The AR Cloud doesn't have map data for this location.
    SixDegreesLoadErrorDataNotAvailable = 7,
    //! The device could not relocalize in less than 30 seconds at this location.
    SixDegreesLoadErrorFailedToRelocalize = 8,
};

/*!
 @brief Provides information about the specified LoadFromARCloud process.
 @discussion Populates stateOut with the latest state code of the specified LoadFromARCloud process,
 
 errorOut with an error code if applicable,
 
 downloadSizeOut with the size in bytes of the location map data if applicable,
 
 downloadProgressOut with the percentage progress of the download, from 0 to 100.
 @param loadTimestamp the timestamp returned by the initial call to @link SixDegreesSDK_LoadFromARCloud() @/link.
 @param stateOut optional pointer to the state value (@link SixDegreesLoadState@/link).
 @param errorOut optional pointer to the error value (@link SixDegreesLoadError@/link).
 @param downloadSizeOut optional pointer to the location map data size value.
 @param downloadProgressOut optional pointer to the download progress percentage value.
 */
API_METHOD void SixDegreesSDK_GetLoadStatus(int64_t loadTimestamp, int* stateOut, int* errorOut, int64_t* downloadSizeOut, float* downloadProgressOut);

/*!
 @brief Returns real world mesh information needed for @link SixDegreesSDK_GetBlockMesh()@/link calls.
 @discussion The mesh is cut into blocks, which are are cubes which size is obtained with
 @link SixDegreesSDK_GetMeshBlockSize()@/link.
 Blocks provide a reliable way to break down the mesh and track changes between updates.
 
 Block data can be obtained with the @link SixDegreesSDK_GetBlockMesh()@/link method, which
 required passing pointers to buffers. This function gives you the minimum size for those buffers.
 
 The returned version number increments every time the mesh changes. You can keep track of the
 version number to avoid unnecessary calls to GetBlockMesh().
 @param blockBufferSizeOut optional pointer to the minimum block buffer size in ints.
 @param vertexBufferSizeOut optional pointer to the minimum vertex buffer size in floats.
 @param faceBufferSizeOut optional pointer to the minimum face index buffer size in ints.
 @return the version number of the mesh, -1 if no mesh is available.
 */
API_METHOD int SixDegreesSDK_GetBlockMeshInfo(int* blockBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut);

/*!
 @brief Returns the size of a mesh block.
 @return the size of the side of a block in meters.
 */
API_METHOD float SixDegreesSDK_GetMeshBlockSize(void);

/*!
 @brief Populates the provided buffers with real world mesh information.
 @discussion All three buffers come with their respective size to prevent the implementation from overflowing,
 and the function returns the number of blocks fully populated.
 @param blockBuffer contains a contiguous array of signed integers { x, y, z, vertexCount, faceCount, version }
 where x, y, z is the location of the block in space.
 @param vertexBuffer contains a continuous array of floats describing vertices and divided into two parts:
 vertex positions { x, y, z } are back-to-back at the beginning from index 0 to 3*vertexCount-1;
 normal vectors { nx, ny, nz } are back-to-back at the end, from index 3*vertexCount to 6*vertexCount-1.
 vertexCount is equal to vertexBufferSize/6.
 @param faceBuffer contains a contiguous array of vertex indices { a, b, c }, each 3 representing a triangle.
 faceCount is equal to faceBufferSize/3.
 @param blockBufferSize the size of the block buffer, in ints
 @param vertexBufferSize the size of the vertex buffer, in floats
 @param faceBufferSize the size of the index buffer, in ints
 @return the number of blocks fully populated, or -1 if the mesh is not ready or if at least one of the buffer
 was too small to accommodate all the mesh data. Use @link SixDegreesSDK_GetBlockMeshInfo()@/link to get the
 recommended buffer sizes.
 */
API_METHOD int SixDegreesSDK_GetBlockMesh(int* blockBuffer, float* vertexBuffer, int* faceBuffer, int blockBufferSize, int vertexBufferSize, int faceBufferSize);
