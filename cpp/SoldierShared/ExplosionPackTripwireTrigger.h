// Object: ExplosionPackTripwireTrigger
// ClassId: 1605
// RuntimeId: 13216
// TypeInfo: 0x0000000144F42AB0
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../SoldierShared/TripwireEntityData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ExplosionPackTripwireTrigger : public SoldierShared::ExplosionPackTrigger {
        SoldierShared::TripwireEntityData Tripwire; // 0x18
    }; // 0x20
    static_assert(sizeof(ExplosionPackTripwireTrigger) == 0x20);
}
#pragma pack(pop)