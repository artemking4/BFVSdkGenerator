// Object: ObstacleDetectionEntityData
// ClassId: 2919
// RuntimeId: 63454
// TypeInfo: 0x0000000144C4FA60
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ObstacleDetectionEntityData : public Entity::EntityData {
        Float32 MaxYawSpeed; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        Core::Vec3 TranslationOffset; // 0x70
        Core::Vec3 HalfExtents; // 0x80
        Float32 MaxJumpHeight; // 0x90
        Float32 ToggleSprintThreshold; // 0x94
        Float32 JumpCooldown; // 0x98
        Float32 MinJumpVelocity; // 0x9C
        Float32 MinMediumJumpVelocity; // 0xA0
        Float32 MinHighJumpVelocity; // 0xA4
        Float32 HighJumpHeight; // 0xA8
        Float32 MediumJumpHeight; // 0xAC
        Float32 LowJumpHeight; // 0xB0
        Float32 MinJumpHeight; // 0xB4
        Float32 RejectWaterDepth; // 0xB8
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0xBC
        Int32 ThrottleInput; // 0xC0
        Int32 BrakeInput; // 0xC4
        Int32 BrakeInAirInput; // 0xC8
        Int32 SteerInput; // 0xCC
        Int32 JumpInput; // 0xD0
        Int32 SprintInput; // 0xD4
        Boolean RemoveSprint; // 0xD8
        Boolean AllowJumping; // 0xD9
        Boolean CreateAvoidanceForOtherDetectors; // 0xDA
        char pad_0xDB[0x5];
    }; // 0xE0
    static_assert(sizeof(ObstacleDetectionEntityData) == 0xE0);
}
#pragma pack(pop)