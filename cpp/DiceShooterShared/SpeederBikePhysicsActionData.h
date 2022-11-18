// Object: SpeederBikePhysicsActionData
// ClassId: 2967
// RuntimeId: 10760
// TypeInfo: 0x0000000144DED320
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SpeederBikePhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::LinearTransform LookFrameOffset; // 0x60
        Core::Vec3 TurnSteerRate; // 0xA0
        Core::Vec3 StrafeSteerRate; // 0xB0
        Core::Vec3 HeightSteerRate; // 0xC0
        Core::Vec3 PitchSteerRate; // 0xD0
        Core::Vec3 ForceRate; // 0xE0
        Core::Vec3 ForceApplyOffset; // 0xF0
        Core::Vec3 RollGravity; // 0x100
        Core::Vec3 DiffPow; // 0x110
        Core::Vec3 TurnTorque; // 0x120
        Core::Vec3 DiffToTorque; // 0x130
        Core::Vec3 TailDrag; // 0x140
        Core::Vec3 StaticTailDrag; // 0x150
        Core::Vec3 LocalTailOffset; // 0x160
        Float32 HeightLookScale; // 0x170
        Int32 InputActionPitch; // 0x174
        Int32 InputActionYaw; // 0x178
        Int32 InputActionThrottle; // 0x17C
        Int32 InputActionBoost; // 0x180
        Int32 InputActionStrafe; // 0x184
        Float32 StrafeSpeedFactor; // 0x188
        Float32 StrafeStateChangeRate; // 0x18C
        Float32 StrafeDeadzone; // 0x190
        Float32 StrafeSpeed; // 0x194
        Float32 StrafeAcceleration; // 0x198
        Float32 BoostRate; // 0x19C
        Float32 AccRate; // 0x1A0
        Float32 DiffToAcc; // 0x1A4
        Float32 ExtraGravity; // 0x1A8
        Float32 AntiPitch; // 0x1AC
        Float32 AntiDrift; // 0x1B0
        Float32 CamberThrustPow; // 0x1B4
        Float32 MoveFrameTurnRate; // 0x1B8
        Core::Vec2 StrafeAngle; // 0x1BC
        Core::Vec2 TurnPow; // 0x1C4
        Core::Vec2 MovePow; // 0x1CC
        Core::Vec2 TurnRate; // 0x1D4
        Float32 CruiseSpeedMPS; // 0x1DC
        Float32 StrafeSpeedMPS; // 0x1E0
        Core::Vec2 AccelerationMinMax; // 0x1E4
        Core::Vec2 ForceMinMax; // 0x1EC
        Core::Vec2 BoostTurn; // 0x1F4
        Float32 LookConvergence; // 0x1FC
        Float32 UprightSmoothing; // 0x200
        Float32 UprightExtrapolate; // 0x204
        Float32 YawExtrapolate; // 0x208
        Float32 YawExtrapolateStrafe; // 0x20C
        Core::AudioCurve TurnRateCurve; // 0x210
        Core::AudioCurve StrafeAngleCurve; // 0x220
        Core::AudioCurve ThrustPerHeightCurve; // 0x230
        Core::AudioCurve GravityCurve; // 0x240
        Core::AudioCurve HeightCurve; // 0x250
        Core::AudioCurve AntiPitchCurve; // 0x260
        Core::AudioCurve BoostCurve; // 0x270
        Float32 SetAndForgetThrottleInputAccelRate; // 0x280
        Float32 SetAndForgetThrottleInputDecelRate; // 0x284
        Float32 ReferenceMaxSpeed; // 0x288
        Float32 BaseSlipstreamingValue; // 0x28C
        Core::AudioCurve SlipstreamingAngleMultiplier; // 0x290
        Core::AudioCurve SlipstreamingDistanceMultiplier; // 0x2A0
        Boolean IsBoosting; // 0x2B0
        Boolean UseSetAndForgetThrottle; // 0x2B1
        char pad_0x2B2[0xE];
    }; // 0x2C0
    static_assert(sizeof(SpeederBikePhysicsActionData) == 0x2C0);
}
#pragma pack(pop)