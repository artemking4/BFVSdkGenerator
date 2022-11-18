// Object: GunMasterRank
// ClassId: 4092
// RuntimeId: 4265
// TypeInfo: 0x0000000144D65F70
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../WeaponShared/WeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GunMasterRank : public Core::DataContainer {
        Int32 KillsRequired; // 0x18
        char pad_0x1C[0x4];
        SoldierShared::SoldierWeaponUnlockAsset Weapon; // 0x20
        WeaponShared::WeaponSlot WeaponSlot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(GunMasterRank) == 0x30);
}
#pragma pack(pop)