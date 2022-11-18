// Object: WeaponAnimMiscModifier
// ClassId: 5663
// RuntimeId: 11611
// TypeInfo: 0x0000000144F430B0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAnimMiscModifier : public WeaponShared::WeaponModifierBase {
        Boolean AltMagazine; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WeaponAnimMiscModifier) == 0x28);
}
#pragma pack(pop)