// Object: ExplosionPackVehicleDetailedRayTrigger
// ClassId: 1606
// RuntimeId: 62503
// TypeInfo: 0x0000000144F44030
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ExplosionPackVehicleDetailedRayTrigger : public SoldierShared::ExplosionPackTrigger {
        Float32 ActivationDelay; // 0x18
        Float32 Radius; // 0x1C
        Boolean IgnoreVehicleSpeed; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(ExplosionPackVehicleDetailedRayTrigger) == 0x28);
}
#pragma pack(pop)