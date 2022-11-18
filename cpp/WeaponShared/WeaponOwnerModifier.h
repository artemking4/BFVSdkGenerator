// Object: WeaponOwnerModifier
// ClassId: 5681
// RuntimeId: 7819
// TypeInfo: 0x0000000144F7A460
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../WeaponShared/WeaponUnlockAsset.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponOwnerModifier : public WeaponShared::WeaponModifierDynamicBase {
        WeaponShared::WeaponUnlockAsset Unlock; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponOwnerModifier) == 0x28);
}
#pragma pack(pop)