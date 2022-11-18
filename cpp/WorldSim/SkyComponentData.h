// Object: SkyComponentData
// ClassId: 1910
// RuntimeId: 12280
// TypeInfo: 0x0000000144EC1DC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../WorldSim/SkyType.h"
#include "../Global/Float32.h"
#include "../Render/TextureAsset.h"
#include "../WorldSim/AlphaOutputMode.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SkyComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 CloudLayerSunColor; // 0x90
        Core::Vec3 CloudLayer1Color; // 0xA0
        Core::Vec3 CloudLayer2Color; // 0xB0
        Core::Vec4 InteriorEnvmapExp; // 0xC0
        Core::Vec4 InteriorEnvmapScale; // 0xD0
        Core::Vec4 InteriorEnvmapBias; // 0xE0
        Core::Vec3 RayleighScatteringCoefficient; // 0xF0
        Core::Vec3 Light1Color; // 0x100
        Core::Vec3 Light2Color; // 0x110
        Core::Vec3 nightSkyColor; // 0x120
        Core::Vec3 nightSkyHorizonColor; // 0x130
        Core::Vec3 RayleighPolarization; // 0x140
        Core::Vec3 MiePolarization; // 0x150
        Core::Vec3 OutdoorLightScale; // 0x160
        Core::Vec4 ForwardScatteringDepthVisibility; // 0x170
        Core::Vec3 ForwardScatteringOutdoorLightTint; // 0x180
        Core::Vec3 HeightFogColorAdd; // 0x190
        Core::Vec3 HeightFogColorMult; // 0x1A0
        WorldSim::SkyType SkyType; // 0x1B0
        Float32 LuminanceScale; // 0x1B4
        Render::TextureAsset SkyGradientTexture; // 0x1B8
        WorldSim::AlphaOutputMode AlphaOutput; // 0x1C0
        Float32 HdriRotation; // 0x1C4
        Render::TextureAsset HdriTexture; // 0x1C8
        Float32 SunSize; // 0x1D0
        Float32 SunScale; // 0x1D4
        Float32 PanoramicUVMinX; // 0x1D8
        Float32 PanoramicUVMaxX; // 0x1DC
        Float32 PanoramicUVMinY; // 0x1E0
        Float32 PanoramicUVMaxY; // 0x1E4
        Float32 PanoramicTileFactor; // 0x1E8
        Float32 PanoramicRotation; // 0x1EC
        Render::TextureAsset PanoramicTexture; // 0x1F0
        Render::TextureAsset PanoramicAlphaTexture; // 0x1F8
        Render::TextureAsset CloudLayerMaskTexture; // 0x200
        Float32 CloudLayer1Altitude; // 0x208
        Float32 CloudLayer1TileFactor; // 0x20C
        Float32 CloudLayer1Rotation; // 0x210
        Float32 CloudLayer1Speed; // 0x214
        Float32 CloudLayer1SunLightIntensity; // 0x218
        Float32 CloudLayer1SunLightPower; // 0x21C
        Float32 CloudLayer1AmbientLightIntensity; // 0x220
        Float32 CloudLayer1AlphaMul; // 0x224
        Render::TextureAsset CloudLayer1Texture; // 0x228
        Float32 CloudLayer1Absorption; // 0x230
        Float32 CloudLayer1Scattering; // 0x234
        Float32 CloudLayer1Phase; // 0x238
        Float32 CloudLayer1Thickness; // 0x23C
        Float32 CloudLayer2Altitude; // 0x240
        Float32 CloudLayer2TileFactor; // 0x244
        Float32 CloudLayer2Rotation; // 0x248
        Float32 CloudLayer2Speed; // 0x24C
        Float32 CloudLayer2SunLightIntensity; // 0x250
        Float32 CloudLayer2SunLightPower; // 0x254
        Float32 CloudLayer2AmbientLightIntensity; // 0x258
        Float32 CloudLayer2AlphaMul; // 0x25C
        Render::TextureAsset CloudLayer2Texture; // 0x260
        Float32 CloudLayer2Absorption; // 0x268
        Float32 CloudLayer2Scattering; // 0x26C
        Float32 CloudLayer2Phase; // 0x270
        Float32 CloudLayer2Thickness; // 0x274
        Render::TextureAsset StaticEnvmapTexture; // 0x278
        Float32 StaticEnvmapScale; // 0x280
        Float32 SkyEnvmap8BitTexScale; // 0x284
        Render::TextureAsset CustomEnvmapTexture; // 0x288
        Float32 CustomEnvmapScale; // 0x290
        Float32 CustomEnvmapAmbient; // 0x294
        Float32 SkyVisibilityExponent; // 0x298
        char pad_0x29C[0x4];
        Render::TextureAsset InteriorEnvmapTexture; // 0x2A0
        Float32 InteriorEnvmapSkyVisibilityFadeStart; // 0x2A8
        Float32 InteriorEnvmapSkyVisibilityFadeLength; // 0x2AC
        Float32 EarthRadius; // 0x2B0
        Float32 AtmosphereRadius; // 0x2B4
        Float32 MieScatteringCoefficient; // 0x2B8
        Float32 MieG; // 0x2BC
        Float32 MieExtinctionCoefficientRelation; // 0x2C0
        Float32 ScaleHeightMie; // 0x2C4
        Float32 RayleighScatteringCoefficientScale; // 0x2C8
        Float32 RayleighExtinctionCoefficientRelation; // 0x2CC
        Float32 ScaleHeightRayleigh; // 0x2D0
        Float32 OzonePercentage; // 0x2D4
        Float32 AerialPerspectiveScale; // 0x2D8
        Float32 AerialPerspectiveIntensity; // 0x2DC
        Float32 AerialPerspectiveDithering; // 0x2E0
        Float32 Light1Intensity; // 0x2E4
        Float32 Light1RotX; // 0x2E8
        Float32 Light1RotY; // 0x2EC
        Float32 Light2Intensity; // 0x2F0
        Float32 Light2RotX; // 0x2F4
        Float32 Light2RotY; // 0x2F8
        Float32 nightSkyHorizonScale; // 0x2FC
        Float32 FogStartDistance; // 0x300
        Float32 ForwardScatteringStartDepth; // 0x304
        Float32 ForwardScatteringEndDepth; // 0x308
        Float32 ForwardScatteringTakesColorFromOutdoorLight; // 0x30C
        Float32 MinHeightFogTransmittance; // 0x310
        Float32 InitialGameTime; // 0x314
        Float32 InitialFlowTime; // 0x318
        Float32 FlowPeriod; // 0x31C
        Float32 FlowDistance; // 0x320
        Float32 FlowDirection; // 0x324
        Float32 FlowHeightMaskScale; // 0x328
        Float32 FlowHeightMaskBias; // 0x32C
        Render::TextureAsset FlowMaskTexture; // 0x330
        Uint32 FieldFlagOverride0; // 0x338
        Uint32 FieldFlagOverride1; // 0x33C
        Uint32 FieldFlagOverride2; // 0x340
        Uint32 FieldFlagOverride3; // 0x344
        Boolean Enable; // 0x348
        Boolean UseSkyVisibilityAsAO; // 0x349
        Boolean SkyGradientFollowsPanoramicUVs; // 0x34A
        Boolean UseOzone; // 0x34B
        Boolean UseAerialPerspective; // 0x34C
        Boolean Light1FollowOutdoorLight; // 0x34D
        Boolean Light1TakesColorFromOutdoorLight; // 0x34E
        Boolean UseLightSource2; // 0x34F
        Boolean UseNoise; // 0x350
        Boolean DrawSunDisc; // 0x351
        Boolean FlowEnable; // 0x352
        char pad_0x353[0xD];
    }; // 0x360
    static_assert(sizeof(SkyComponentData) == 0x360);
}
#pragma pack(pop)