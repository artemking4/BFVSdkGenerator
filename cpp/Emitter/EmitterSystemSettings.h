// Object: EmitterSystemSettings
// ClassId: 1540
// RuntimeId: 50953
// TypeInfo: 0x0000000144E2A0A0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/QualityLevel.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Emitter {
    class EmitterSystemSettings : public Core::DataContainer {
        Uint32 SkipUpdateMaxCount; // 0x18
        Int32 ForceJobCount; // 0x1C
        Float32 TimeScale; // 0x20
        Float32 GlobalResetStartTimeInterval; // 0x24
        Uint32 CollisionRayCastMaxCount; // 0x28
        Uint32 ProximityPhysicsEntitiesMaxCount; // 0x2C
        Core::QualityLevel EmitterQualityLevel; // 0x30
        Float32 TemplateTimeoutTime; // 0x34
        Float32 PreciseWindAndForceMaxDistance; // 0x38
        Float32 TurbulenceMaxDistance; // 0x3C
        Float32 ScreenAreaCullingStart; // 0x40
        Float32 ScreenAreaCullingEnd; // 0x44
        Float32 ScreenAreaCullingMinTotalArea; // 0x48
        Float32 ScreenAreaCullingMaxTotalArea; // 0x4C
        Float32 ScreenAreaCullingMaxMultiplier; // 0x50
        Float32 ProcessJobYieldTime; // 0x54
        Float32 VisibleJobYieldTime; // 0x58
        Uint32 DrawStats; // 0x5C
        Uint32 DrawMemStats; // 0x60
        Uint32 DrawBoundingBoxes; // 0x64
        Float32 MinScreenArea; // 0x68
        Uint32 DrawDebugAtlasMiplevel; // 0x6C
        Int32 DrawDebugAtlasTextureIndex; // 0x70
        Int32 DrawDebugEmitterExclusionVolumes; // 0x74
        Int32 DrawDebugAtlasPageIndex; // 0x78
        char pad_0x7C[0x4];
        CString SystemShadersPath; // 0x80
        CString SystemVSFPath; // 0x88
        Int32 QuadTechnique; // 0x90
        Float32 PunctualLightThresholdSquared; // 0x94
        Float32 QuadNearFadeDistance; // 0x98
        Uint32 QuadMaxCount; // 0x9C
        Float32 MeshCullingDistance; // 0xA0
        Uint32 MeshDrawCountLimit; // 0xA4
        Float32 MeshStreamingPriorityMultiplier; // 0xA8
        Uint32 MeshMaxCount; // 0xAC
        Uint32 QuadLightProbeMaxUpdateCount; // 0xB0
        Uint32 MeshLightProbeMaxUpdateCount; // 0xB4
        Uint32 GraphLightProbeMaxUpdateCount; // 0xB8
        Uint32 EmitterGraphBlockAllocatorMaxByteCount; // 0xBC
        Uint32 EmitterGraphBlockAllocatorBlockMaxCount; // 0xC0
        Uint32 EmitterGraphMaxDefragOperationsPerFrame; // 0xC4
        Boolean Enable; // 0xC8
        Boolean UpdateJobEnable; // 0xC9
        Boolean EnableFixedTimeStep; // 0xCA
        Boolean EnableFixedDelta; // 0xCB
        Boolean EnableJobs; // 0xCC
        Boolean CollisionRayCastEnable; // 0xCD
        Boolean DrawDebugRayCastCollision; // 0xCE
        Boolean MeshEmitterVelocityVectorEnable; // 0xCF
        Boolean EmitterInstancedSimEnabled; // 0xD0
        Boolean EnableRendering; // 0xD1
        Boolean CollectPerformanceStats; // 0xD2
        Boolean HideInactiveStats; // 0xD3
        Boolean SaveListActiveEmitters; // 0xD4
        Boolean DrawEmitterName; // 0xD5
        Boolean ZBufferCullEnable; // 0xD6
        Boolean DrawProjectedBoxes; // 0xD7
        Boolean DrawTransforms; // 0xD8
        Boolean DrawLightProbeSampleTransforms; // 0xD9
        Boolean DrawDebugBaseAtlas; // 0xDA
        Boolean DrawDebugNormalAtlas; // 0xDB
        Boolean DrawDebugAtlasAlpha; // 0xDC
        Boolean DrawDebugEmitterSunTransmittanceMapGroup; // 0xDD
        Boolean DrawDebugEmitterSunTransmittanceMapsLinks; // 0xDE
        Boolean ForceSunTransmittanceOnAllEmitters; // 0xDF
        Boolean EmitterRenderSunTransmittanceViewsFirst; // 0xE0
        Boolean DrawDebugEmitterVertexBufferUsage; // 0xE1
        Boolean EmitterGpuLightingEnable; // 0xE2
        Boolean EmitterGpuLightingPipelineShadersEnabled; // 0xE3
        Boolean QuadClipScaleEnable; // 0xE4
        Boolean QuadEnableRendering; // 0xE5
        Boolean QuadNiceRenderingEnable; // 0xE6
        Boolean QuadSimpleRenderingEnable; // 0xE7
        Boolean QuadEnableOpaque; // 0xE8
        Boolean QuadEnableCustomShader; // 0xE9
        Boolean QuadColorShaderCostsEnable; // 0xEA
        Boolean QuadEnableSorting; // 0xEB
        Boolean QuadEnableWireframe; // 0xEC
        Boolean QuadHalfResEnable; // 0xED
        Boolean QuadGroupsJoinAll; // 0xEE
        Boolean QuadGroupsJoinNone; // 0xEF
        Boolean QuadGroupsJoinNiceAndSimple; // 0xF0
        Boolean QuadVertexShadowsEnable; // 0xF1
        Boolean QuadCloudVertexShadowsEnable; // 0xF2
        Boolean QuadPlanarReflectionEnable; // 0xF3
        Boolean QuadPointLightsEnable; // 0xF4
        Boolean QuadSpotLightsEnable; // 0xF5
        Boolean QuadResourceSyncJobEnable; // 0xF6
        Boolean MeshRenderingEnable; // 0xF7
        Boolean MeshDrawTransforms; // 0xF8
        Boolean MeshDrawBoundingBoxes; // 0xF9
        Boolean MeshShadowEnable; // 0xFA
        Boolean MeshPlanarReflectionEnable; // 0xFB
        Boolean MeshDrawCullStats; // 0xFC
        Boolean SkipRenderIfProbeIsUninitialized; // 0xFD
        Boolean GraphEmitterEnabled; // 0xFE
        Boolean GraphEmitterDrawDebugStats; // 0xFF
        Boolean GraphEmitterDrawDebugBuffers; // 0x100
        Boolean GraphEmitterDrawDebugViewVisibleInstances; // 0x101
        Boolean GraphEmitterOverlappedComputeEnable; // 0x102
        Boolean EmitterGraphDrawDebugUberBuffer; // 0x103
        Boolean EmitterGraphUberBufferDefragEnable; // 0x104
        Boolean EmitterGrapDrawExclusionVolumesStats; // 0x105
        char pad_0x106[0x2];
    }; // 0x108
    static_assert(sizeof(EmitterSystemSettings) == 0x108);
}
#pragma pack(pop)