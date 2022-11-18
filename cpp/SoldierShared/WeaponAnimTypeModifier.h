// Object: WeaponAnimTypeModifier
// ClassId: 5664
// RuntimeId: 46293
// TypeInfo: 0x0000000144F43430
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/WeaponAnimType.h"
#include "../SoldierShared/WeaponGripType_LH.h"
#include "../SoldierShared/WeaponGripType_RH.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAnimTypeModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::WeaponAnimType WeaponAnimType; // 0x20
        SoldierShared::WeaponGripType_LH WeaponGripType_LH; // 0x24
        SoldierShared::WeaponGripType_RH WeaponGripType_RH; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(WeaponAnimTypeModifier) == 0x30);
}
#pragma pack(pop)