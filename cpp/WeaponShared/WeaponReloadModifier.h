// Object: WeaponReloadModifier
// ClassId: 5691
// RuntimeId: 24192
// TypeInfo: 0x0000000144F7A2E0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../WeaponShared/WeaponReloadAnimType.h"
#include "../WeaponShared/ReloadInfo.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponReloadModifier : public WeaponShared::WeaponModifierBase {
        WeaponShared::WeaponReloadAnimType ReloadAnimType; // 0x20
        char pad_0x24[0x4];
        Array<WeaponShared::ReloadInfo> ReloadInfoArray; // 0x28
    }; // 0x30
    static_assert(sizeof(WeaponReloadModifier) == 0x30);
}
#pragma pack(pop)