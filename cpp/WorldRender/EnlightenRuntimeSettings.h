// Object: EnlightenRuntimeSettings
// ClassId: 4983
// RuntimeId: 38369
// TypeInfo: 0x0000000144EB9AE0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldRender {
    class EnlightenRuntimeSettings : public Core::SystemSettings {
        Guid SaveRadiosityTexturesDataAssetGuid; // 0x20
        Float32 TemporalCoherenceThreshold; // 0x30
        char pad_0x34[0xC];
        Core::Vec3 AlbedoDefaultColor; // 0x40
        Float32 MaxPerFrameTemporalSolveTime; // 0x50
        Float32 DistancePriority; // 0x54
        Float32 FrustumPriority; // 0x58
        Float32 SkyBoxScale; // 0x5C
        Float32 MaxPerFrameSolveTime; // 0x60
        Uint32 MinSystemUpdateCount; // 0x64
        Uint32 JobCount; // 0x68
        Uint32 LightProbeMaxSourceSolveCount; // 0x6C
        Uint32 LightProbeMaxInstanceUpdateCount; // 0x70
        Uint32 LightProbeTableCellSize; // 0x74
        Float32 LocalLightForceRadius; // 0x78
        Int32 DrawDebugMeshLod; // 0x7C
        Int32 DrawDebugSystemDependenciesEnable; // 0x80
        Int32 DrawDebugSystemBoundingBoxEnable; // 0x84
        Float32 DrawDebugLightProbeSize; // 0x88
        Float32 DrawDebugLightProbeCullDistance; // 0x8C
        Int32 TransparencyInterpolants; // 0x90
        Int32 TransparencyUpdateCount; // 0x94
        Boolean Enable; // 0x98
        Boolean ForceDynamic; // 0x99
        Boolean ForceUpdateStaticLightingBuffersEnable; // 0x9A
        Boolean SaveRadiosityTexturesEnable; // 0x9B
        Boolean JobsEnable; // 0x9C
        Boolean ShadowsEnable; // 0x9D
        Boolean SpotLightShadowsEnable; // 0x9E
        Boolean SunLightShadowsEnable; // 0x9F
        Boolean CompensateSunShadowHeightScale; // 0xA0
        Boolean LightMapsEnable; // 0xA1
        Boolean LightProbeEnable; // 0xA2
        Boolean LightProbeForceUpdate; // 0xA3
        Boolean LightProbeJobsEnable; // 0xA4
        Boolean LocalLightsEnable; // 0xA5
        Boolean LocalLightCullingEnable; // 0xA6
        Boolean LocalLightCustumFalloff; // 0xA7
        Boolean DrawDebugEntities; // 0xA8
        Boolean DrawDebugSystemsEnable; // 0xA9
        Boolean DrawDebugLightProbes; // 0xAA
        Boolean DrawDebugLightProbeGrid; // 0xAB
        Boolean DrawDebugLightProbeOcclusion; // 0xAC
        Boolean DrawDebugLightProbeStats; // 0xAD
        Boolean DrawDebugLightProbeBoundingBoxes; // 0xAE
        Boolean DrawDebugTransparencyLightProbes; // 0xAF
        Boolean DrawSolveTaskPerformanceSummary; // 0xB0
        Boolean DrawSolveTaskPerformanceDetails; // 0xB1
        Boolean DrawDebugColoringEnable; // 0xB2
        Boolean DrawDebugTextures; // 0xB3
        Boolean DrawDebugGPUDusters; // 0xB4
        Boolean DrawDebugGPUSunVisibility; // 0xB5
        Boolean DrawDebugGPUSpotVisibility; // 0xB6
        Boolean DrawDebugBackFaces; // 0xB7
        Boolean DrawDebugTargetMeshes; // 0xB8
        Boolean DrawDebugDusterPositions; // 0xB9
        Boolean DrawDebugClusters; // 0xBA
        Boolean DrawDebugTransSamplePositions; // 0xBB
        Boolean DrawWarningsEnable; // 0xBC
        Boolean AlbedoForceUpdateEnable; // 0xBD
        Boolean AlbedoForceColorEnable; // 0xBE
        Boolean TerrainMapEnable; // 0xBF
        Boolean EmissiveEnable; // 0xC0
        Boolean DebugMeshesEnable; // 0xC1
        Boolean ValidationEnable; // 0xC2
        Boolean UpdateTransparencyWithSunLightChange; // 0xC3
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(EnlightenRuntimeSettings) == 0xD0);
}
#pragma pack(pop)