// Object: ExplosionPackVehicleRayTrigger
// ClassId: 1608
// RuntimeId: 58890
// TypeInfo: 0x0000000144F440B0
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ExplosionPackVehicleRayTrigger : public SoldierShared::ExplosionPackTrigger {
        Float32 ActivationDelay; // 0x18
        Float32 Distance; // 0x1C
    }; // 0x20
    static_assert(sizeof(ExplosionPackVehicleRayTrigger) == 0x20);
}
#pragma pack(pop)