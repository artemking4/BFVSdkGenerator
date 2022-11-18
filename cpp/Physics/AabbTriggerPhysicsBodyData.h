// Object: AabbTriggerPhysicsBodyData
// ClassId: 2976
// RuntimeId: 6990
// TypeInfo: 0x0000000144F0F100
#include "../Physics/PhysicsBodyData.h"
#include "../Core/Vec3.h"
#include "../Physics/RigidBodyMotionType.h"

#pragma pack(push, 16)
namespace Physics {
    class AabbTriggerPhysicsBodyData : public Physics::PhysicsBodyData {
        char pad_0x38[0x8];
        Core::Vec3 HalfExtents; // 0x40
        Physics::RigidBodyMotionType MotionType; // 0x50
        char pad_0x54[0xC];
    }; // 0x60
    static_assert(sizeof(AabbTriggerPhysicsBodyData) == 0x60);
}
#pragma pack(pop)