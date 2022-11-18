// Object: WeaponSwitchToPrimaryWhenOutOfAmmoModifier
// ClassId: 5693
// RuntimeId: 33209
// TypeInfo: 0x0000000144F7A6E0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponSwitchToPrimaryWhenOutOfAmmoModifier : public WeaponShared::WeaponModifierBase {
        Float32 SwitchToPrimaryWhenOutOfAmmoDelay; // 0x20
        Float32 WaitForZoomOutBeforeSwitchToPrimaryWhenOutOfAmmoDelay; // 0x24
        Boolean SwitchToPrimaryWhenOutOfAmmo; // 0x28
        Boolean SwitchToCloneWhenOutOfAmmo; // 0x29
        Boolean WaitForFireBeforeSwitchToPrimaryWhenOutOfAmmo; // 0x2A
        Boolean WaitForZoomOutBeforeSwitchToPrimaryWhenOutOfAmmo; // 0x2B
        Boolean AllowSwitchingToWeaponOutOfAmmo; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(WeaponSwitchToPrimaryWhenOutOfAmmoModifier) == 0x30);
}
#pragma pack(pop)