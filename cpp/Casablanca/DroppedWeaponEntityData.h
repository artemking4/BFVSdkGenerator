// Object: DroppedWeaponEntityData
// ClassId: 3295
// RuntimeId: 4136
// TypeInfo: 0x0000000144C31BF0
#include "../Casablanca/DroppedItemEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DroppedWeaponEntityData : public Casablanca::DroppedItemEntityData {
        Boolean AmmoPickupUnlimited; // 0xA0
        Boolean AmmoPickupOnWeaponClass; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(DroppedWeaponEntityData) == 0xB0);
}
#pragma pack(pop)