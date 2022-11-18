// Object: WeaponCollection
// ClassId: 5654
// RuntimeId: 6549
// TypeInfo: 0x0000000144D018A0
#include "../Core/DataContainer.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeaponCollection : public Core::DataContainer {
        Array<SoldierShared::SoldierWeaponUnlockAsset> Weapons; // 0x18
    }; // 0x20
    static_assert(sizeof(WeaponCollection) == 0x20);
}
#pragma pack(pop)