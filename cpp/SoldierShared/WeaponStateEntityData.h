// Object: WeaponStateEntityData
// ClassId: 3915
// RuntimeId: 54143
// TypeInfo: 0x0000000144F45930
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 WeaponSlot; // 0x24
        Int32 Ammo; // 0x28
        Int32 AmmoInMags; // 0x2C
        Boolean UseLocalPlayer; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(WeaponStateEntityData) == 0x38);
}
#pragma pack(pop)