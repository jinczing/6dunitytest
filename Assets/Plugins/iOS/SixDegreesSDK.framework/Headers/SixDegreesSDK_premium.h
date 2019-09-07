/*!
 @header SixDegreesSDK_premium.h
 @copyright Copyright (C) 2019 6degrees.xyz Inc.
 @abstract This file is part of the 6D.ai Beta SDK.
 
 IMPORTANT: the API calls listed in this header file are only available to 6D.ai custom (unlimited)
    tier customers. If you would like to discuss custom pricing, please contact sales\@6d.ai.
    We continue to evolve our product, and are considering making some of these features available
    under a self-service model in the future.
 
 @version beta 0.22.0
 @ignore API_PREMIUM_METHOD
 */

#pragma once

#import <MetalKit/MetalKit.h>

#define API_PREMIUM_METHOD FOUNDATION_EXPORT __attribute__((visibility ("default")))

/*!
 @brief Returns whether the API calls contained in this header are available.
 @return true if the calls are available, false otherwise.
 */
API_PREMIUM_METHOD bool SixDegreesSDK_IsTexturedMeshAvailable(void);

/*!
 @brief Persists the location map data to the 6D.ai AR Cloud.
 @discussion This API call returns early, use @link SixDegreesSDK_GetSaveStatus() @/link to monitor saving progress.
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param customLocationId the desired custom location identifier to associate with the location map data.
 If empty or null, this call is equivalent to @link SixDegreesSDK_SaveToARCloud() @/link.
 @return save timestamp, to be used in other calls to control and monitor saving progress.
 */
API_PREMIUM_METHOD int64_t SixDegreesSDK_SaveToARCloudLocation(const char* customLocationId);

/*!
 @brief Loads the location map data from the 6D.ai AR Cloud.
 @discussion This API call returns early, use @link SixDegreesSDK_GetLoadStatus() @/link to monitor saving progress.
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param customLocationId the desired custom location identifier to associate with the location map data.
 If empty or null, this call is equivalent to @link SixDegreesSDK_LoadFromARCloud() @/link.
 @return load timestamp, to be used in other calls to control and monitor saving progress.
 */
API_PREMIUM_METHOD int64_t SixDegreesSDK_LoadFromARCloudLocation(const char* customLocationId);

/*!
 @brief Returns real world mesh information needed for @link SixDegreesSDK_GetColoredBlockMesh()@/link calls.
 @discussion The mesh is cut into blocks, which are are cubes which size is obtained with
 @link SixDegreesSDK_GetMeshBlockSize()@/link.
 Blocks provide a reliable way to break down the mesh and track changes between updates.
 
 Block data can be obtained with the @link SixDegreesSDK_GetColoredBlockMesh()@/link method, which
 required passing pointers to buffers. This function gives you the minimum size for those buffers.
 
 The returned version number increments every time the mesh changes. You can keep track of the
 version number to avoid unnecessary calls to GetColoredBlockMesh().
 
 This method is similar to @link SixDegreesSDK_GetBlockMeshInfo()@/link except the returned vertex
 buffer size includes space for vertex colors.
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param blockBufferSizeOut optional pointer to the minimum block buffer size in ints.
 @param vertexBufferSizeOut optional pointer to the minimum vertex buffer size in floats.
 @param faceBufferSizeOut optional pointer to the minimum face index buffer size in ints.
 @return the version number of the mesh, -1 if no mesh is available.
 */
API_PREMIUM_METHOD int SixDegreesSDK_GetColoredBlockMeshInfo(int* blockBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut);

/*!
 @brief Populates the provided buffers with real world mesh information.
 @discussion All three buffers come with their respective size to prevent the implementation from overflowing,
 and the function returns the number of blocks fully populated.
 
 This method is similar to @link SixDegreesSDK_GetBlockMesh()@/link except the returned vertex
 buffer includes for vertex colors.
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param blockBuffer contains a contiguous array of signed integers { x, y, z, vertexCount, faceCount, version }
 where x, y, z is the location of the block in space.
 @param vertexBuffer contains a continuous array of floats describing vertices and divided into three parts:
 vertex positions { x, y, z } are back-to-back at the beginning from index 0 to 3*vertexCount-1;
 normal vectors { nx, ny, nz } are back-to-back in the middle, from index 3*vertexCount to 6*vertexCount-1; and
 vertex colors { r, g, b } are back-to-back at the end, from index 6*vertexCount to 9*vertexCount-1.
 vertexCount is equal to vertexBufferSize/9.
 @param faceBuffer contains a contiguous array of vertex indices { a, b, c }, each 3 representing a triangle.
 faceCount is equal to faceBufferSize/3.
 @param blockBufferSize the size of the block buffer, in ints
 @param vertexBufferSize the size of the vertex buffer, in floats
 @param faceBufferSize the size of the index buffer, in ints
 @return the number of blocks fully populated, or -1 if the mesh is not ready or if at least one of the buffer
 was too small to accommodate all the mesh data. Use @link SixDegreesSDK_GetColoredBlockMeshInfo()@/link to get the
 recommended buffer sizes.
 */
API_PREMIUM_METHOD int SixDegreesSDK_GetColoredBlockMesh(int* blockBuffer, float* vertexBuffer, int* faceBuffer, int blockBufferSize, int vertexBufferSize, int faceBufferSize);

/*!
 @brief Returns real world mesh information needed for @link SixDegreesSDK_GetTexturedMesh()@/link calls.
 @discussion The mesh faces and vertices are grouped by texture ID. Mesh coverage is a subset of the
 block mesh as keeping texture data is memory intensive. Expect the radius of the textured mesh to be
 at most 6 meters around the user.
 
 The returned version number increments every time the mesh changes. You can keep track of the
 version number to avoid unnecessary calls to GetTexturedMesh().
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param textureBufferSizeOut optional pointer to the minimum texture buffer size in ints.
 textureCount is equal to textureBufferSize/3.
 @param vertexBufferSizeOut optional pointer to the minimum vertex buffer size in floats.
 vertexCount is equal to vertexBufferSize/11.
 @param faceBufferSizeOut optional pointer to the minimum face index buffer size in ints.
 faceCount is equal to faceBufferSize/3.
 @return the version number of the mesh, -1 if no mesh is available.
 */
API_PREMIUM_METHOD int SixDegreesSDK_GetTexturedMeshInfo(int* textureBufferSizeOut, int* vertexBufferSizeOut, int* faceBufferSizeOut);

/*!
 @brief Populates the provided buffers with real world mesh information.
 @discussion All three buffers come with their respective size to prevent the implementation from overflowing,
 and the function returns the number of textures fully populated.
 
 This call is only available if @link SixDegreesSDK_IsTexturedMeshAvailable() @/link returns true.
 @param textureBuffer contains a contiguous array of signed integers { textureId, vertexCount, faceCount }
 where textureId can be used in @link SixDegreesSDK_GetMeshTexture() @/link.
 textureCount is equal to textureBufferSize/3.
 @param vertexBuffer contains a continuous array of floats describing vertices and divided into four parts:
 vertex positions { x, y, z } are back-to-back at the beginning from index 0 to 3*vertexCount-1;
 normal vectors { nx, ny, nz } are back-to-back in the middle, from index 3*vertexCount to 6*vertexCount-1;
 vertex colors { r, g, b } are back-to-back in the middle, from index 6*vertexCount to 9*vertexCount-1; and
 texture coordinates { u, v } are back-to-back at the end, from index 9*vertexCount to 11*vertexCount-1.
 vertexCount is equal to vertexBufferSize/11.
 @param faceBuffer contains a contiguous array of vertex indices { a, b, c }, each 3 representing a triangle.
 faceCount is equal to faceBufferSize/3.
 @param textureBufferSize the size of the texture buffer, in ints
 @param vertexBufferSize the size of the vertex buffer, in floats
 @param faceBufferSize the size of the index buffer, in ints
 @return the number of textures fully populated, or -1 if the mesh is not ready or if at least one of the buffer
 was too small to accommodate all the mesh data. Use @link SixDegreesSDK_GetTexturedMeshInfo()@/link
 to get the recommended buffer sizes.
 */
API_PREMIUM_METHOD int SixDegreesSDK_GetTexturedMesh(int* textureBuffer, float* vertexBuffer, int* faceBuffer, int textureBufferSize, int vertexBufferSize, int faceBufferSize);

/*!
 @brief Returns the Metal texture for a given mesh texture id.
 @param textureId the unique texture identifier from the texture buffer obtained through
 @link SixDegreesSDK_GetTexturedMesh() @/link.
 @return pointer to the mesh texture
 */
API_PREMIUM_METHOD id<MTLTexture> SixDegreesSDK_GetMeshTexture(int textureId);
