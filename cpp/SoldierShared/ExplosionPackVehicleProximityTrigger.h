// Object: ExplosionPackVehicleProximityTrigger
// ClassId: 1607
// RuntimeId: 55219
// TypeInfo: 0x0000000144F44130
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ExplosionPackVehicleProximityTrigger : public SoldierShared::ExplosionPackTrigger {
        Float32 ActivationDelay; // 0x18
        Float32 Radius; // 0x1C
        Boolean UseDetailedCollisionCheck; // 0x20
        Boolean IgnoreVehicleSpeed; // 0x21
        Boolean ForceTriggerOnFriendlies; // 0x22
        char pad_0x23[0x5];
    }; // 0x28
    static_assert(sizeof(ExplosionPackVehicleProximityTrigger) == 0x28);
}
#pragma pack(pop)