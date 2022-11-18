// Object: DynamicPlayerAbilityPickupEntityData
// ClassId: 3337
// RuntimeId: 36641
// TypeInfo: 0x0000000144DF81C0
#include "../DiceShooterShared/PlayerAbilitySpatialPickupEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class DynamicPlayerAbilityPickupEntityData : public DiceShooterShared::PlayerAbilitySpatialPickupEntityData {
        Boolean DestroyOnPickedUp; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(DynamicPlayerAbilityPickupEntityData) == 0xB0);
}
#pragma pack(pop)