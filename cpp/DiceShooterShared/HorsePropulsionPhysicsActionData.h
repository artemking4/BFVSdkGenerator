// Object: HorsePropulsionPhysicsActionData
// ClassId: 2955
// RuntimeId: 36437
// TypeInfo: 0x0000000144DED1A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class HorsePropulsionPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 InputSteering; // 0x58
        Float32 InputThrottle; // 0x5C
        Float32 InputBrake; // 0x60
        Float32 InputBrakeInAir; // 0x64
        Float32 RunSpeed; // 0x68
        char pad_0x6C[0x4];
        Core::AudioCurve SurfacePitchRunSpeedMultiplier; // 0x70
        Core::AudioCurve AccelerationCurve; // 0x80
        Core::AudioCurve DeaccelerationCurve; // 0x90
        Float32 MinSideSpeedForAutoThrottle; // 0xA0
        Float32 ReverseSteeringMultiplier; // 0xA4
        Float32 ReverseSpeed; // 0xA8
        Float32 ReverseSensorRayLength; // 0xAC
        Float32 ReverseSensorOffsetY; // 0xB0
        Float32 ReverseSensorOffsetZ; // 0xB4
        Core::AudioCurve YawSpeed; // 0xB8
        Core::AudioCurve StoppingYawSpeed; // 0xC8
        Core::AudioCurve YawAccelerationCurve; // 0xD8
        Core::AudioCurve YawDeaccelerationCurve; // 0xE8
        Core::AudioCurve BrakeSpeed; // 0xF8
        Core::AudioCurve BrakeZoneAngle; // 0x108
        Core::AudioCurve StoppingBrakeZoneAngle; // 0x118
        Float32 IdleSpeedlimit; // 0x128
        Float32 StoppingToIdleTimeout; // 0x12C
        Float32 SlopeForMinSliding; // 0x130
        Float32 SlopeSlidingForce; // 0x134
        Float32 SlopeForMaxSliding; // 0x138
        char pad_0x13C[0x4];
    }; // 0x140
    static_assert(sizeof(HorsePropulsionPhysicsActionData) == 0x140);
}
#pragma pack(pop)