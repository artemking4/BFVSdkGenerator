// Object: SoldierBodyComponentData
// ClassId: 1836
// RuntimeId: 33267
// TypeInfo: 0x0000000144F39C90
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierBodyComponentData : public Entity::GameComponentData {
        Core::Vec3 OverrideRaycastOffsetStand; // 0x80
        Core::Vec3 OverrideRaycastOffsetCrouch; // 0x90
        Core::Vec3 OverrideRaycastOffsetProne; // 0xA0
        Float32 OverrideGravityValue; // 0xB0
        Float32 OverrideVelocityY; // 0xB4
        Float32 SpeedMultiplier; // 0xB8
        Float32 SprintMultiplier; // 0xBC
        Float32 InterruptSprintPenaltyTime; // 0xC0
        Boolean OverrideGravity; // 0xC4
        Boolean OverrideVelocity; // 0xC5
        Boolean DisableParachute; // 0xC6
        Boolean DisableCrouch; // 0xC7
        Boolean OverrideRaycastOffset; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(SoldierBodyComponentData) == 0xD0);
}
#pragma pack(pop)