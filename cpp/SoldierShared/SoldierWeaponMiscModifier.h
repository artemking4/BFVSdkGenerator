// Object: SoldierWeaponMiscModifier
// ClassId: 5659
// RuntimeId: 41733
// TypeInfo: 0x0000000144F42DB0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponMiscModifier : public WeaponShared::WeaponModifierBase {
        Boolean EnableBreathControl; // 0x20
        Boolean CanBeInSupportedShooting; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(SoldierWeaponMiscModifier) == 0x28);
}
#pragma pack(pop)