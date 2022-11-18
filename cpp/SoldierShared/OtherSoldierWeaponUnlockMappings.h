// Object: OtherSoldierWeaponUnlockMappings
// ClassId: 4396
// RuntimeId: 48132
// TypeInfo: 0x0000000144F44330
#include "../Core/DataContainer.h"
#include "../SoldierShared/OtherSoldierWeaponUnlockMapping.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class OtherSoldierWeaponUnlockMappings : public Core::DataContainer {
        Array<SoldierShared::OtherSoldierWeaponUnlockMapping> Mappings; // 0x18
    }; // 0x20
    static_assert(sizeof(OtherSoldierWeaponUnlockMappings) == 0x20);
}
#pragma pack(pop)