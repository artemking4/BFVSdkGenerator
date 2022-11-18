// Object: WeaponCrosshairTypeModifier
// ClassId: 5669
// RuntimeId: 52563
// TypeInfo: 0x0000000144F7A5E0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../GameShared/CrosshairTypeAsset.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponCrosshairTypeModifier : public WeaponShared::WeaponModifierBase {
        GameShared::CrosshairTypeAsset CrosshairType; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponCrosshairTypeModifier) == 0x28);
}
#pragma pack(pop)