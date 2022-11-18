// Object: PbrAnalyticLightEntityData
// ClassId: 3390
// RuntimeId: 13907
// TypeInfo: 0x0000000144EC2640
#include "../WorldSim/LocalLightEntityData.h"
#include "../RenderBase/LightColorMode.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../RenderBase/LightUnitType.h"
#include "../Core/QualityScalableEnabled.h"
#include "../WorldSim/ShadowResolutionQuality.h"
#include "../WorldSim/ShadowmapRefreshPolicy.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrAnalyticLightEntityData : public WorldSim::LocalLightEntityData {
        Core::Vec3 Color; // 0x70
        Core::Vec3 ParticleColorScale; // 0x80
        Core::Vec3 RadiosityColorScale; // 0x90
        RenderBase::LightColorMode LightColorMode; // 0xA0
        Int32 Temperature; // 0xA4
        Float32 Intensity; // 0xA8
        Float32 ExposureCompensation; // 0xAC
        Float32 AttenuationRadius; // 0xB0
        Float32 AttenuationOffset; // 0xB4
        RenderBase::LightUnitType LightUnit; // 0xB8
        Core::QualityScalableEnabled CastShadows; // 0xBC
        Core::QualityScalableEnabled CastVolumetricShadows; // 0xC0
        Float32 ShadowNearRadius; // 0xC4
        Float32 ShadowRadius; // 0xC8
        Float32 CullScreenArea; // 0xCC
        Float32 FadeScreenArea; // 0xD0
        Float32 CullDistance; // 0xD4
        Float32 FadeDistance; // 0xD8
        Float32 ShadowCullScreenArea; // 0xDC
        Float32 ShadowFadeScreenArea; // 0xE0
        Float32 ShadowCullDistance; // 0xE4
        Float32 ShadowFadeDistance; // 0xE8
        Float32 ShadowDimmer; // 0xEC
        WorldSim::ShadowResolutionQuality ShadowResolution; // 0xF0
        Float32 Dimmer; // 0xF4
        Int32 ShadowUpdateSignal; // 0xF8
        Float32 ShadowUpdatePriority; // 0xFC
        WorldSim::ShadowmapRefreshPolicy ShadowmapRefresh; // 0x100
        Boolean EmissiveShapeEnable; // 0x104
        Boolean AffectDiffuse; // 0x105
        Boolean AffectSpecular; // 0x106
        Boolean CastShadowsEnable; // 0x107
        Boolean CastVolumetricShadowsEnable; // 0x108
        Boolean AffectRadiosity; // 0x109
        char pad_0x10A[0x6];
    }; // 0x110
    static_assert(sizeof(PbrAnalyticLightEntityData) == 0x110);
}
#pragma pack(pop)