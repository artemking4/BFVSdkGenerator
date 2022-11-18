// Object: WeaponUnlockPickupEntityData
// ClassId: 3309
// RuntimeId: 23
// TypeInfo: 0x0000000144F45730
#include "../SoldierShared/PickupEntityData.h"
#include "../SoldierShared/WeaponUnlockPickupData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class WeaponUnlockPickupEntityData : public SoldierShared::PickupEntityData {
        Array<SoldierShared::WeaponUnlockPickupData> Weapons; // 0x100
        Boolean UseForPersistence; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(WeaponUnlockPickupEntityData) == 0x110);
}
#pragma pack(pop)