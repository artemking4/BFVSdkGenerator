// Object: ColorCorrectionComponentData
// ClassId: 1878
// RuntimeId: 20222
// TypeInfo: 0x0000000144F1CA80
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace Render {
    class ColorCorrectionComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 Brightness; // 0x90
        Core::Vec3 Contrast; // 0xA0
        Core::Vec3 Saturation; // 0xB0
        Float32 Hue; // 0xC0
        char pad_0xC4[0x4];
        RenderBase::TextureBaseAsset ColorGradingTexture; // 0xC8
        Float32 ColorGradingMaxHdrValue; // 0xD0
        char pad_0xD4[0x4];
        RenderBase::TextureBaseAsset HdrColorGradingLut; // 0xD8
        Uint16 FieldFlagOverride0; // 0xE0
        Boolean Enable; // 0xE2
        Boolean ColorGradingEnable; // 0xE3
        char pad_0xE4[0xC];
    }; // 0xF0
    static_assert(sizeof(ColorCorrectionComponentData) == 0xF0);
}
#pragma pack(pop)