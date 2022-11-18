// Object: SkiingStateData
// ClassId: 1382
// RuntimeId: 18494
// TypeInfo: 0x0000000144F0FF80
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Physics {
    class SkiingStateData : public Physics::CharacterStateData {
        Float32 TurningFactor; // 0x20
        Float32 SurfaceDistanceTurnThreshold; // 0x24
        Float32 TurningFriction; // 0x28
        Float32 BrakingMultiplier; // 0x2C
        Float32 MaxSkiingSpeed; // 0x30
        Float32 SkiingSpeedThreshold; // 0x34
        Float32 Friction; // 0x38
        char pad_0x3C[0x4];
        Core::FloatCurve SlopeFrictionCurve; // 0x40
        Core::FloatCurve BasicSkiingCurve; // 0x48
        Core::FloatCurve StrideCurve; // 0x50
        Core::FloatCurve PushOffCurve; // 0x58
        Float32 PushOffDuration; // 0x60
        Float32 PushOffDelay; // 0x64
        Float32 PushOffTurnFactor; // 0x68
        Float32 PushOffTurnFriction; // 0x6C
        Float32 MinPushOffTurnDuration; // 0x70
        Float32 CrsTurnFactor; // 0x74
        Float32 CrsTurnFriction; // 0x78
        Float32 MaxDownhillSlope; // 0x7C
        Float32 RoughMaterialSpeedDecay; // 0x80
        Float32 MaxUphillSlope; // 0x84
        Float32 PushOffDelayScale; // 0x88
        Float32 PushOffVelocityGraceZone; // 0x8C
        Float32 StrafeInputScaleWhenSkiing; // 0x90
        Float32 MaxBasicSkiingSpeed; // 0x94
        Float32 MaxStrideSpeed; // 0x98
        Boolean CrsEnabled; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(SkiingStateData) == 0xA0);
}
#pragma pack(pop)