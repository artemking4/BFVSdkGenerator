// Object: ScreenEffectComponentData
// ClassId: 1901
// RuntimeId: 37416
// TypeInfo: 0x0000000144EC16C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../WorldSim/ScreenEffectFrameType.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class ScreenEffectComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 ScreenEffectParams; // 0x90
        WorldSim::ScreenEffectFrameType FrameType; // 0xA0
        char pad_0xA4[0x4];
        RenderBase::SurfaceShaderBaseAsset Shader; // 0xA8
        Float32 FrameWidth; // 0xB0
        Float32 OuterFrameOpacity; // 0xB4
        Float32 InnerFrameOpacity; // 0xB8
        Float32 Angle; // 0xBC
        Uint8 FieldFlagOverride0; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(ScreenEffectComponentData) == 0xD0);
}
#pragma pack(pop)