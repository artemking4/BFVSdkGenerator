// Object: ScreenSpaceRaytraceComponentData
// ClassId: 1902
// RuntimeId: 54013
// TypeInfo: 0x0000000144EC1440
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Render/TextureAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class ScreenSpaceRaytraceComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 CameraFadeStart; // 0x90
        Float32 CameraFadeLength; // 0x94
        Float32 RadialFadeStart; // 0x98
        Float32 RadialFadeLength; // 0x9C
        Float32 DistanceFadeStart; // 0xA0
        Float32 DistanceFadeLength; // 0xA4
        Float32 ScreenFadeStart; // 0xA8
        Float32 ScreenFadeLength; // 0xAC
        Float32 BorderFadeStart; // 0xB0
        Float32 BorderFadeLength; // 0xB4
        Float32 MirrorFadeStart; // 0xB8
        Float32 MirrorFadeLength; // 0xBC
        Float32 ThicknessFadeStart; // 0xC0
        Float32 ThicknessFadeLength; // 0xC4
        Float32 RoughnessFadeStart; // 0xC8
        Float32 RoughnessFadeLength; // 0xCC
        Render::TextureAsset NormalFadeTexture; // 0xD0
        Uint32 MinSamples; // 0xD8
        Uint32 MaxSamples; // 0xDC
        Uint32 TemporalSamples; // 0xE0
        Uint32 TemporalPeriod; // 0xE4
        Float32 MinRoughness; // 0xE8
        Float32 MaxRoughness; // 0xEC
        Uint32 ResolveSamples; // 0xF0
        Float32 NoiseThreshold; // 0xF4
        Float32 ClampThreshold; // 0xF8
        Float32 ImportanceSamplingBias; // 0xFC
        Float32 FilterBias; // 0x100
        Float32 FilterAngularBias; // 0x104
        Float32 TemporalFilterResponsiveness; // 0x108
        Uint32 FieldFlagOverride0; // 0x10C
        Boolean RaytraceEnable; // 0x110
        char pad_0x111[0xF];
    }; // 0x120
    static_assert(sizeof(ScreenSpaceRaytraceComponentData) == 0x120);
}
#pragma pack(pop)