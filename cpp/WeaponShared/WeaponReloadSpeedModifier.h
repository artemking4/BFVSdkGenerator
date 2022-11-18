// Object: WeaponReloadSpeedModifier
// ClassId: 5683
// RuntimeId: 1429
// TypeInfo: 0x0000000144F7A360
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponReloadSpeedModifier : public WeaponShared::WeaponModifierDynamicBase {
        Float32 ReloadSpeed; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponReloadSpeedModifier) == 0x28);
}
#pragma pack(pop)