// Object: WeaponAnimBaseModifier
// ClassId: 5662
// RuntimeId: 12710
// TypeInfo: 0x0000000144F43130
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/WeaponAnimBaseSetEnum.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAnimBaseModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::WeaponAnimBaseSetEnum AnimBaseSet; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponAnimBaseModifier) == 0x28);
}
#pragma pack(pop)