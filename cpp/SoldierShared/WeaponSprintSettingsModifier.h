// Object: WeaponSprintSettingsModifier
// ClassId: 5692
// RuntimeId: 1937
// TypeInfo: 0x0000000144F42FB0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../SoldierShared/WeaponSprintSettings.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponSprintSettingsModifier : public WeaponShared::WeaponModifierBase {
        SoldierShared::WeaponSprintSettings SprintSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponSprintSettingsModifier) == 0x28);
}
#pragma pack(pop)