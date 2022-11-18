// Object: MeshSettings
// ClassId: 4283
// RuntimeId: 64229
// TypeInfo: 0x0000000144F1CC80
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/QualityLevel.h"

#pragma pack(push, 8)
namespace Render {
    class MeshSettings : public Core::DataContainer {
        CString OverrideShadersShaderName; // 0x18
        CString OverrideShadersMeshName; // 0x20
        Int32 ForceLod; // 0x28
        Int32 RaytraceLodBias; // 0x2C
        Int32 RaytraceAlphaTestLodBias; // 0x30
        Float32 GlobalLodScale; // 0x34
        Float32 ShadowDistanceScale; // 0x38
        Float32 ProceduralAnimationMaxDistance; // 0x3C
        Float32 TessellationMaxFactor; // 0x40
        Float32 TessellationForceTessellationFactor; // 0x44
        Float32 TessellationMaxDistance; // 0x48
        Float32 TessellationMaxDistanceFade; // 0x4C
        Float32 TessellationMaxDistanceScale; // 0x50
        Float32 TessellationMaxDistanceCullScale; // 0x54
        Core::QualityLevel CastShadowQualityLevel; // 0x58
        Core::QualityLevel CastPlanarReflectionQualityLevel; // 0x5C
        Core::QualityLevel CastDynamicReflectionQualityLevel; // 0x60
        Core::QualityLevel CastStaticReflectionQualityLevel; // 0x64
        Core::QualityLevel CastRaytracedReflectionQualityLevel; // 0x68
        Boolean LoadingEnabled; // 0x6C
        Boolean ForceLowestLodInPlanarReflectionsEnable; // 0x6D
        Boolean LodFadeEnable; // 0x6E
        Boolean TessellationEnable; // 0x6F
        Boolean TessellationBackFaceCullingEnable; // 0x70
        Boolean TessellationScreenSpaceAdativeEnable; // 0x71
        Boolean PlanarReflectionTessellationEnable; // 0x72
        Boolean DynamicEnvmapTessellationEnable; // 0x73
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(MeshSettings) == 0x78);
}
#pragma pack(pop)