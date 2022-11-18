// Object: SoldierWeaponUnlockRemappings
// ClassId: 4650
// RuntimeId: 29404
// TypeInfo: 0x0000000144F44430
#include "../Core/DataContainer.h"
#include "../SoldierShared/SoldierWeaponUnlockRemapping.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponUnlockRemappings : public Core::DataContainer {
        Array<SoldierShared::SoldierWeaponUnlockRemapping> Remappings; // 0x18
    }; // 0x20
    static_assert(sizeof(SoldierWeaponUnlockRemappings) == 0x20);
}
#pragma pack(pop)