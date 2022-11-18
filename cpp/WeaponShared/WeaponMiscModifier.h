// Object: WeaponMiscModifier
// ClassId: 5673
// RuntimeId: 62741
// TypeInfo: 0x0000000144F7AAE0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponMiscModifier : public WeaponShared::WeaponModifierBase {
        Boolean IsSilenced; // 0x20
        Boolean HoldBoltActionUntilFireRelease; // 0x21
        Boolean HoldBoltActionUntilZoomRelease; // 0x22
        Boolean ForceBoltActionOnFireTrigger; // 0x23
        Boolean UnZoomOnBoltAction; // 0x24
        Boolean ReturnToZoomAfterBoltAction; // 0x25
        Boolean TriggerBoltActionWhenOutOfAmmo; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(WeaponMiscModifier) == 0x28);
}
#pragma pack(pop)