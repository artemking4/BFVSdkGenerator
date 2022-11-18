// Object: QuadEffectComponentData
// ClassId: 1899
// RuntimeId: 16490
// TypeInfo: 0x0000000144EC1640
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../Core/Vec2.h"
#include "../WorldSim/QuadEffectAnchorType.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class QuadEffectComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 Viewport; // 0x90
        Core::Vec4 ScreenEffectParams; // 0xA0
        RenderBase::SurfaceShaderBaseAsset Shader; // 0xB0
        Core::Vec2 ScreenLayoutSize; // 0xB8
        WorldSim::QuadEffectAnchorType AnchorPoint; // 0xC0
        Boolean PreExpose; // 0xC4
        Boolean KeepAspectRatio; // 0xC5
        Boolean BoundToMainScreen; // 0xC6
        Uint8 FieldFlagOverride0; // 0xC7
        char pad_0xC8[0x8];
    }; // 0xD0
    static_assert(sizeof(QuadEffectComponentData) == 0xD0);
}
#pragma pack(pop)