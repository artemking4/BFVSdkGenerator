// Object: WeaponZeroingModifier
// ClassId: 5694
// RuntimeId: 57513
// TypeInfo: 0x0000000144F499C0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/WeaponZeroingEntry.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponZeroingModifier : public WeaponShared::WeaponModifierBase {
        Array<SoldierShared::WeaponZeroingEntry> Modes; // 0x20
        Float32 DefaultZeroingDistance; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(WeaponZeroingModifier) == 0x30);
}
#pragma pack(pop)