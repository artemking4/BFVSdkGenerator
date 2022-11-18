// Object: KitPickupEntityData
// ClassId: 3308
// RuntimeId: 36334
// TypeInfo: 0x0000000144F456B0
#include "../SoldierShared/PickupEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class KitPickupEntityData : public SoldierShared::PickupEntityData {
        Boolean KeepAdditionalWeapons; // 0x100
        char pad_0x101[0xF];
    }; // 0x110
    static_assert(sizeof(KitPickupEntityData) == 0x110);
}
#pragma pack(pop)