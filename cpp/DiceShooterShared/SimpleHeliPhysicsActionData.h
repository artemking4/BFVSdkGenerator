// Object: SimpleHeliPhysicsActionData
// ClassId: 2966
// RuntimeId: 61988
// TypeInfo: 0x0000000144DED120
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/FloatCurve.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SimpleHeliPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::Vec3 TurnSteerRate; // 0x60
        Core::Vec3 StrafeSteerRate; // 0x70
        Core::Vec3 HeightSteerRate; // 0x80
        Core::Vec3 PitchSteerRate; // 0x90
        Core::Vec3 GyroscopicDamping; // 0xA0
        Core::Vec3 AirResistance; // 0xB0
        Float32 NormalisedFuel; // 0xC0
        Float32 NormalisedEnginePower; // 0xC4
        Int32 InputActionPitch; // 0xC8
        Int32 InputActionYaw; // 0xCC
        Int32 InputActionStrafe; // 0xD0
        Int32 InputActionUp; // 0xD4
        Int32 InputActionDown; // 0xD8
        char pad_0xDC[0x4];
        Core::FloatCurve NormalisedSpeedVsYawScaleCurve; // 0xE0
        Core::FloatCurve NormalisedSpeedVsStrafeScaleCurve; // 0xE8
        Core::FloatCurve NormalisedSpeedVsRollScaleCurve; // 0xF0
        Core::FloatCurve RollVsYawScaleCurve; // 0xF8
        Float32 LeftStickInputPow; // 0x100
        Float32 RightStickInputPow; // 0x104
        Float32 LeftStickInputSquareness; // 0x108
        Float32 RightStickInputSquareness; // 0x10C
        Float32 LeftStickDeadZone; // 0x110
        Float32 RightStickDeadZone; // 0x114
        Float32 MaxSpeedMph; // 0x118
        Float32 EngineIdleRpm; // 0x11C
        Float32 EngineBaseRpm; // 0x120
        Float32 EngineHoverRpm; // 0x124
        Float32 EngineMaxRpm; // 0x128
        Float32 EngineAccelRate; // 0x12C
        Float32 EngineDecelRate; // 0x130
        Float32 ClutchRate; // 0x134
        Float32 EngineRotorGearRatio; // 0x138
        Float32 RotorRpmFade; // 0x13C
        Core::FloatCurve RotorLiftCurve; // 0x140
        Float32 MaxPitchForce; // 0x148
        Float32 MaxPitchTorque; // 0x14C
        Float32 MaxRollTorque; // 0x150
        Float32 MaxYawTorque; // 0x154
        Float32 MaxStrafeForce; // 0x158
        Float32 ChangeOfDirectionBoostScale; // 0x15C
        Float32 CorrectLiftPitchScale; // 0x160
        Float32 YawModelToWorldSpaceBlend; // 0x164
        Int32 NumPerimeterSamples; // 0x168
        Float32 PerimeterRadius; // 0x16C
        Float32 GroundTestLookAheadTime; // 0x170
        Float32 InAirHeight; // 0x174
        Float32 MaxAltitude; // 0x178
        Float32 MaxAltitudeFadeRange; // 0x17C
        Float32 MaxAltitudeExtraGravityScalar; // 0x180
        Float32 MaxAltitudeVelocityDamping; // 0x184
        Float32 HoverVelocityDamping; // 0x188
        Float32 SwashPlateMix; // 0x18C
        Float32 CyclicPitch; // 0x190
        Float32 CyclicStrafeRoll; // 0x194
        Float32 MinSpeedForCollisionEvent; // 0x198
        Float32 MinSpeedForWheelContactEvent; // 0x19C
        Uint32 MainBodyPartIndex; // 0x1A0
        char pad_0x1A4[0x4];
        Core::FloatCurve BodyImpactDamageCurve; // 0x1A8
        Float32 MousePitchDeadzone; // 0x1B0
        Float32 MouseStrafeRollDeadzone; // 0x1B4
        Float32 MouseSteerRateScalar; // 0x1B8
        Boolean ApplyAirResistanceNoInput; // 0x1BC
        Boolean UsePerimeterSampling; // 0x1BD
        Boolean DetectWater; // 0x1BE
        Boolean UseAdvancedHandling; // 0x1BF
        Boolean WheelCollisionStaticOnly; // 0x1C0
        char pad_0x1C1[0xF];
    }; // 0x1D0
    static_assert(sizeof(SimpleHeliPhysicsActionData) == 0x1D0);
}
#pragma pack(pop)