// Object: WeaponFiringDataModifier
// ClassId: 5672
// RuntimeId: 46380
// TypeInfo: 0x0000000144F7AA60
#include "../WeaponShared/WeaponModifierBase.h"
#include "../WeaponShared/WeaponFiringData.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponFiringDataModifier : public WeaponShared::WeaponModifierBase {
        WeaponShared::WeaponFiringData WeaponFiring; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponFiringDataModifier) == 0x28);
}
#pragma pack(pop)