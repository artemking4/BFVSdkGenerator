// Object: WeaponAnimatedFireTypeModifier
// ClassId: 5665
// RuntimeId: 44816
// TypeInfo: 0x0000000144F433B0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/AnimatedFireEnum.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAnimatedFireTypeModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::AnimatedFireEnum AnimatedFireType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponAnimatedFireTypeModifier) == 0x28);
}
#pragma pack(pop)