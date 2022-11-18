// Object: WeaponClassModifier
// ClassId: 5668
// RuntimeId: 31103
// TypeInfo: 0x0000000144F43330
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/WeaponClassEnum.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponClassModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::WeaponClassEnum WeaponClass; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponClassModifier) == 0x28);
}
#pragma pack(pop)