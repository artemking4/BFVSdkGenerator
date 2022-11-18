// Object: OnGroundStateData
// ClassId: 1380
// RuntimeId: 9102
// TypeInfo: 0x0000000144F10300
#include "../Physics/CharacterStateData.h"
#include "../Physics/IdleAccelBonusInfo.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Physics/DirectionChangePenaltyData.h"

#pragma pack(push, 8)
namespace Physics {
    class OnGroundStateData : public Physics::CharacterStateData {
        Physics::IdleAccelBonusInfo StandIdleAccelBonus; // 0x20
        Float32 JumpDelay; // 0x2C
        Float32 JumpStaminaPenalty; // 0x30
        Float32 AllowedDistanceFromGround; // 0x34
        Float32 FallWithGravityDistanceFromGround; // 0x38
        Float32 ClampSurfaceNormalAngle; // 0x3C
        Float32 UphillSpeedModifier; // 0x40
        Float32 UphillSpeedModifierMaxAngle; // 0x44
        Float32 DownhillSpeedModifier; // 0x48
        Float32 DownhillSpeedModifierMaxAngle; // 0x4C
        Float32 SidehillSpeedModifier; // 0x50
        Float32 HillSpeedModifierDeadZone; // 0x54
        Float32 CharacterSpringScaleMovingUnderTerrain; // 0x58
        Float32 CharacterSpringScaleMovingOverTerrain; // 0x5C
        Float32 CharacterSpringScaleStill; // 0x60
        Float32 CharacterSpringMaxVelocity; // 0x64
        Float32 AnimTransitionBlendStartPercentage; // 0x68
        Float32 AnimTransitionBlendTime; // 0x6C
        Float32 AnimTransitionSpringScale; // 0x70
        Float32 SprintSlideMaxDecelerationRate; // 0x74
        Float32 SprintSlideMaxAccelerationRate; // 0x78
        char pad_0x7C[0x4];
        Physics::DirectionChangePenaltyData DirectionChangePenalty; // 0x80
        Boolean GroundHugging; // 0xC0
        Boolean LimitDownwardVelocity; // 0xC1
        Boolean UseAnimTransitionSpringBlend; // 0xC2
        char pad_0xC3[0x5];
    }; // 0xC8
    static_assert(sizeof(OnGroundStateData) == 0xC8);
}
#pragma pack(pop)