// Object: DamageEffectComponentData
// ClassId: 1879
// RuntimeId: 29412
// TypeInfo: 0x0000000144EC15C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class DamageEffectComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 TopDamage; // 0x90
        Core::Vec4 LeftDamage; // 0xA0
        Core::Vec4 BottomDamage; // 0xB0
        Core::Vec4 RightDamage; // 0xC0
        RenderBase::SurfaceShaderBaseAsset Shader; // 0xD0
        Float32 FrameWidth; // 0xD8
        Float32 OuterFrameOpacity; // 0xDC
        Float32 InnerFrameOpacity; // 0xE0
        Float32 FallofTime; // 0xE4
        Float32 MinDamagePercentageThreshold; // 0xE8
        Float32 MaxOpacityDamagePercentage; // 0xEC
        Float32 StartCriticalEffectHealthThreshold; // 0xF0
        Float32 EndCriticalEffectHealthThreshold; // 0xF4
        Uint16 FieldFlagOverride0; // 0xF8
        Boolean DebugDamage; // 0xFA
        char pad_0xFB[0x5];
    }; // 0x100
    static_assert(sizeof(DamageEffectComponentData) == 0x100);
}
#pragma pack(pop)