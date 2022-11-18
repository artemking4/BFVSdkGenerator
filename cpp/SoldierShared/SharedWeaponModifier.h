// Object: SharedWeaponModifier
// ClassId: 5658
// RuntimeId: 50880
// TypeInfo: 0x0000000144F42EB0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/ReloadInfo.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SharedWeaponModifier : public WeaponShared::WeaponModifierBase {
        Uint32 SharedWeaponIdHash; // 0x20
        Uint32 SharedWithWeaponIdHash; // 0x24
        WeaponShared::ReloadInfo AltReloadInfo; // 0x28
        Float32 AltBoltActionTime; // 0x58
        Boolean DecrementAmmoOnSwitchFromSharedWeapon; // 0x5C
        Boolean UseAltReloadInfo; // 0x5D
        Boolean UseAltBoltActionTime; // 0x5E
        char pad_0x5F[0x1];
    }; // 0x60
    static_assert(sizeof(SharedWeaponModifier) == 0x60);
}
#pragma pack(pop)