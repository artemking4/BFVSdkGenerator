// Object: SoldierWeaponOverrideData
// ClassId: 4646
// RuntimeId: 53597
// TypeInfo: 0x0000000144F45130
#include "../Core/DataContainer.h"
#include "../SoldierShared/WeaponOverrideData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponOverrideData : public Core::DataContainer {
        Array<SoldierShared::WeaponOverrideData> Overrides; // 0x18
    }; // 0x20
    static_assert(sizeof(SoldierWeaponOverrideData) == 0x20);
}
#pragma pack(pop)