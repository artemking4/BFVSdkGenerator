// Object: BFVehiclePhysicsComponentData
// ClassId: 1954
// RuntimeId: 20367
// TypeInfo: 0x0000000144C7CF00
#include "../GameShared/VehiclePhysicsComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFVehiclePhysicsComponentData : public GameShared::VehiclePhysicsComponentData {
        Float32 CollisionSpeedThreshold; // 0xC0
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(BFVehiclePhysicsComponentData) == 0xD0);
}
#pragma pack(pop)