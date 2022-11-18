// Object: DynamicWeaponPickupEntityData
// ClassId: 3307
// RuntimeId: 27730
// TypeInfo: 0x0000000144F455B0
#include "../SoldierShared/PickupEntityData.h"
#include "../SoldierShared/DynamicWeaponPickupSlotData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class DynamicWeaponPickupEntityData : public SoldierShared::PickupEntityData {
        Array<SoldierShared::DynamicWeaponPickupSlotData> WeaponSlots; // 0x100
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(DynamicWeaponPickupEntityData) == 0x110);
}
#pragma pack(pop)