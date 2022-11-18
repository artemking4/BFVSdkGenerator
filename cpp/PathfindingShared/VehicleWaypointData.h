// Object: VehicleWaypointData
// ClassId: 5652
// RuntimeId: 54826
// TypeInfo: 0x0000000144EABC80
#include "../PathfindingShared/WaypointData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class VehicleWaypointData : public PathfindingShared::WaypointData {
        Float32 Speed; // 0x28
        Float32 SpeedOverrideMovingTowards; // 0x2C
        Float32 SpeedLimitOnReached; // 0x30
        Float32 SpeedLimitMovingTowards; // 0x34
        Float32 Heading; // 0x38
        Float32 WaitHere; // 0x3C
        Float32 StoppingDeceleration; // 0x40
        Float32 MinSlowdownSpeed; // 0x44
        Float32 StopHereRadius; // 0x48
        Boolean UseHeading; // 0x4C
        Boolean StopHere; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(VehicleWaypointData) == 0x50);
}
#pragma pack(pop)