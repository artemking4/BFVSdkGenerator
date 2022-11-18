// Object: VehiclePhysicsComponentData
// ClassId: 1953
// RuntimeId: 17043
// TypeInfo: 0x0000000144E8D460
#include "../GameplaySim/ControllablePhysicsComponentData.h"
#include "../GameShared/VehiclePhysicsActionData.h"
#include "../Physics/ProximityTrackerData.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehiclePhysicsComponentData : public GameplaySim::ControllablePhysicsComponentData {
        GameShared::VehiclePhysicsActionData VehiclePhysicsAction; // 0xB0
        Physics::ProximityTrackerData ProximityTrackerData; // 0xB8
    }; // 0xC0
    static_assert(sizeof(VehiclePhysicsComponentData) == 0xC0);
}
#pragma pack(pop)