// Object: WeaponOverheatModifier
// ClassId: 5690
// RuntimeId: 44145
// TypeInfo: 0x0000000144F7A560
#include "../WeaponShared/WeaponModifierBase.h"
#include "../WeaponShared/OverHeatData.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class WeaponOverheatModifier : public WeaponShared::WeaponModifierBase {
        WeaponShared::OverHeatData Overheat; // 0x20
    }; // 0x110
    static_assert(sizeof(WeaponOverheatModifier) == 0x110);
}
#pragma pack(pop)