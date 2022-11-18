// Object: OutdoorLightComponentData
// ClassId: 1896
// RuntimeId: 63002
// TypeInfo: 0x0000000144EC1EC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../WorldSim/ShadowFilteringType.h"
#include "../RenderBase/ShaderShadowmapQuality.h"
#include "../Global/Int32.h"
#include "../Render/TextureAsset.h"
#include "../Core/Vec2.h"
#include "../RenderBase/TextureAddress.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OutdoorLightComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 SunColor; // 0x90
        Core::Vec3 FinalSunLuminance; // 0xA0
        Core::Vec3 FinalSunIlluminance; // 0xB0
        Core::Vec3 OuterSpaceSunLuminance; // 0xC0
        Core::Vec3 OuterSpaceSunIlluminance1; // 0xD0
        Core::Vec3 OuterSpaceSunIlluminance2; // 0xE0
        Core::Vec3 SkyColor; // 0xF0
        Core::Vec3 GroundColor; // 0x100
        Float32 SunRotationX; // 0x110
        Float32 SunRotationY; // 0x114
        Float32 ShadowSunRotationX; // 0x118
        Float32 ShadowSunRotationY; // 0x11C
        Float32 SunIntensity; // 0x120
        Float32 SunAngularRadius; // 0x124
        Float32 SkyLightAngleFactor; // 0x128
        Float32 SunSpecularScale; // 0x12C
        Float32 SkyEnvmapShadowScale; // 0x130
        Float32 SimpleSkyVisibility; // 0x134
        Float32 SunShadowHeightScale; // 0x138
        WorldSim::ShadowFilteringType SunShadowFilterType; // 0x13C
        RenderBase::ShaderShadowmapQuality SunShadowForwardQuality; // 0x140
        Int32 SunPcssInitialSampleCount; // 0x144
        Int32 SunPcssMaximumSampleCount; // 0x148
        Float32 SunPcssFilterErrorThresholdPct; // 0x14C
        Float32 SunPenumbraSize; // 0x150
        Float32 SunPcssShadowFilterScale; // 0x154
        Render::TextureAsset CloudShadowTexture; // 0x158
        Core::Vec2 CloudShadowSpeed; // 0x160
        Float32 CloudShadowSize; // 0x168
        Float32 CloudShadowCoverage; // 0x16C
        Float32 CloudShadowExponent; // 0x170
        Float32 CloudShadowStartFade; // 0x174
        Float32 CloudShadowsFadeDistance; // 0x178
        Float32 CloudShadowStartHeightFade; // 0x17C
        Float32 CloudShadowsHeightFadeDistance; // 0x180
        Core::Vec2 CloudXZTranslation; // 0x184
        RenderBase::TextureAddress CloudShadowAddressingMode; // 0x18C
        Render::TextureAsset SecondaryCloudShadowTexture; // 0x190
        Core::Vec2 SecondaryCloudShadowSpeed; // 0x198
        Float32 SecondaryCloudShadowSize; // 0x1A0
        Float32 SecondaryCloudShadowCoverage; // 0x1A4
        Float32 SecondaryCloudShadowExponent; // 0x1A8
        Core::Vec2 SecondaryCloudXZTranslation; // 0x1AC
        RenderBase::TextureAddress SecondaryCloudShadowAddressingMode; // 0x1B4
        Float32 TranslucencyAmbient; // 0x1B8
        Float32 TranslucencyScale; // 0x1BC
        Float32 TranslucencyPower; // 0x1C0
        Float32 TranslucencyDistortion; // 0x1C4
        Float32 ParticleSunShadowFactor; // 0x1C8
        Float32 ParticleSunShadowSmoothing; // 0x1CC
        Uint32 FieldFlagOverride0; // 0x1D0
        Uint32 FieldFlagOverride1; // 0x1D4
        Boolean Enable; // 0x1D8
        Boolean ShadowSunRotationEnable; // 0x1D9
        Boolean CascadeShadowEnable; // 0x1DA
        Boolean SunPcssFilterAdaptive; // 0x1DB
        Boolean CloudShadowEnable; // 0x1DC
        Boolean CloudShadowIsTopDown; // 0x1DD
        Boolean CloudShadowHeightFadeEnable; // 0x1DE
        Boolean CloudRadiosityEnable; // 0x1DF
        Boolean SecondaryCloudShadowIsTopDown; // 0x1E0
        char pad_0x1E1[0xF];
    }; // 0x1F0
    static_assert(sizeof(OutdoorLightComponentData) == 0x1F0);
}
#pragma pack(pop)