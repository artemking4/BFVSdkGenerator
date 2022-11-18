// Object: WeaponUnlockPickupOverrideData
// ClassId: 3918
// RuntimeId: 37991
// TypeInfo: 0x0000000144F457B0
#include "../Entity/EntityData.h"
#include "../SoldierShared/WeaponUnlockPickupData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponUnlockPickupOverrideData : public Entity::EntityData {
        Array<SoldierShared::WeaponUnlockPickupData> Weapons; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponUnlockPickupOverrideData) == 0x28);
}
#pragma pack(pop)