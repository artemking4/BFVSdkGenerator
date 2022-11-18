// Object: CharacterPhysicsData
// ClassId: 207
// RuntimeId: 44823
// TypeInfo: 0x0000000144F0FD00
#include "../Core/Asset.h"
#include "../Physics/CharacterPoseData.h"
#include "../Physics/CharacterStateData.h"
#include "../Physics/CharacterStateType.h"
#include "../Physics/CharacterSprintData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Physics/CharacterPhysicsBodyData.h"
#include "../Physics/CharacterPhysicsAgilityConfigurations.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterPhysicsData : public Core::Asset {
        Array<Physics::CharacterPoseData> Poses; // 0x20
        Array<Physics::CharacterStateData> States; // 0x28
        Physics::CharacterStateType DefaultState; // 0x30
        char pad_0x34[0x4];
        Physics::CharacterSprintData Sprint; // 0x38
        Entity::MaterialDecl MaterialPair; // 0x40
        Int32 PushableObjectWeight; // 0x44
        Float32 Mass; // 0x48
        Float32 MaxAscendAngle; // 0x4C
        Float32 SlideAngle; // 0x50
        Float32 SlideSpeedCondition; // 0x54
        Float32 PhysicalRadius; // 0x58
        Float32 EnterSwimStateDepth; // 0x5C
        Float32 ExitSwimStateDepth; // 0x60
        Float32 InputAcceleration; // 0x64
        Float32 LadderAcceptAngle; // 0x68
        Float32 LadderAcceptAnglePitch; // 0x6C
        Float32 JumpPenaltyTime; // 0x70
        Float32 JumpPenaltyFactor; // 0x74
        Float32 RadiusToPredictCollisionOnCharacters; // 0x78
        char pad_0x7C[0x4];
        Physics::CharacterPhysicsBodyData PhysicsBody; // 0x80
        Int32 CheckSupportRaycastCountMoving; // 0x88
        Float32 CheckSupportLookaheadDistance; // 0x8C
        Float32 RayStartHeightOnGround; // 0x90
        Float32 RayEndHeightOnGround; // 0x94
        Float32 RayStartHeightInAir; // 0x98
        Float32 RayEndHeightInAir; // 0x9C
        Float32 SpeedForMovingRayCasts; // 0xA0
        char pad_0xA4[0x4];
        Physics::CharacterPhysicsAgilityConfigurations AgilityConfigurations; // 0xA8
        Boolean AllowSupportedSlideState; // 0xB0
        Boolean AllowPoseChangeDuringTransition; // 0xB1
        Boolean AutoPushAwayFromWallsInProne; // 0xB2
        char pad_0xB3[0x5];
    }; // 0xB8
    static_assert(sizeof(CharacterPhysicsData) == 0xB8);
}
#pragma pack(pop)