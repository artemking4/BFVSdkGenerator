// Object: WeaponAnimationConfigurationModifier
// ClassId: 5666
// RuntimeId: 43221
// TypeInfo: 0x0000000144F434B0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/AnimatedFireEnum.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAnimationConfigurationModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::AnimatedFireEnum AnimatedFireType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponAnimationConfigurationModifier) == 0x28);
}
#pragma pack(pop)