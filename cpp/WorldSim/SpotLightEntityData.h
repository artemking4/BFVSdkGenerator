// Object: SpotLightEntityData
// ClassId: 3389
// RuntimeId: 24034
// TypeInfo: 0x0000000144EC27C0
#include "../WorldSim/OriginalLocalLightEntityData.h"
#include "../RenderBase/SpotLightShape.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Core/QualityScalableEnabled.h"
#include "../Global/Boolean.h"
#include "../Core/QualityLevel.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SpotLightEntityData : public WorldSim::OriginalLocalLightEntityData {
        RenderBase::SpotLightShape Shape; // 0xC0
        Float32 ConeInnerAngle; // 0xC4
        Float32 ConeOuterAngle; // 0xC8
        Float32 FrustumFov; // 0xCC
        Float32 FrustumAspect; // 0xD0
        Float32 OrthoWidth; // 0xD4
        Float32 OrthoHeight; // 0xD8
        Float32 NearPlane; // 0xDC
        RenderBase::TextureBaseAsset Texture; // 0xE0
        Core::QualityScalableEnabled CastShadows; // 0xE8
        Core::QualityScalableEnabled CastVolumetricShadows; // 0xEC
        Float32 ShadowRadius; // 0xF0
        Float32 ShadowCullDistance; // 0xF4
        Core::QualityScalableEnabled FrustumAsCone; // 0xF8
        Float32 FrustumAsConeIntensityScale; // 0xFC
        Core::QualityLevel CastShadowsMinLevel; // 0x100
        Boolean FrustumAsConeAngle; // 0x104
        Boolean CastShadowsEnable; // 0x105
        Boolean CastVolumetricShadowsEnable; // 0x106
        char pad_0x107[0x9];
    }; // 0x110
    static_assert(sizeof(SpotLightEntityData) == 0x110);
}
#pragma pack(pop)