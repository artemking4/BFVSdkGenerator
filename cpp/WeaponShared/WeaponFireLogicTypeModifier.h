// Object: WeaponFireLogicTypeModifier
// ClassId: 5678
// RuntimeId: 41086
// TypeInfo: 0x0000000144F7A960
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../WeaponShared/FireLogicType.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponFireLogicTypeModifier : public WeaponShared::WeaponModifierDynamicBase {
        WeaponShared::FireLogicType PrimaryFireLogicType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponFireLogicTypeModifier) == 0x28);
}
#pragma pack(pop)