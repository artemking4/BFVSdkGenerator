// Object: WeaponOverrideData
// ClassId: 5695
// RuntimeId: 40510
// TypeInfo: 0x0000000144F44830
#include "../Core/DataContainer.h"
#include "../SoldierShared/WeaponOverrideValue.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponOverrideData : public Core::DataContainer {
        Core::DataContainer Data; // 0x18
        Array<SoldierShared::WeaponOverrideValue> Values; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponOverrideData) == 0x28);
}
#pragma pack(pop)