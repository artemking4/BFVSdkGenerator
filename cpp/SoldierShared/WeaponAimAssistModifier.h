// Object: WeaponAimAssistModifier
// ClassId: 5661
// RuntimeId: 4881
// TypeInfo: 0x0000000144F43A30
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/SoldierAimAssistData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAimAssistModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::SoldierAimAssistData AimAssist; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponAimAssistModifier) == 0x28);
}
#pragma pack(pop)