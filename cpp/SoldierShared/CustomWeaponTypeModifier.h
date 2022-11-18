// Object: CustomWeaponTypeModifier
// ClassId: 5657
// RuntimeId: 45430
// TypeInfo: 0x0000000144F431B0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../WeaponShared/WeaponData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CustomWeaponTypeModifier : public WeaponShared::WeaponModifierBase {
        WeaponShared::WeaponData CustomWeaponType; // 0x20
    }; // 0x28
    static_assert(sizeof(CustomWeaponTypeModifier) == 0x28);
}
#pragma pack(pop)