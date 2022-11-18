// Object: PhysicalCameraTransformerEntityData
// ClassId: 2457
// RuntimeId: 38117
// TypeInfo: 0x0000000144C1D080
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/AudioCurve.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PhysicalCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 FollowDistance; // 0x28
        Float32 FollowDistanceMin; // 0x2C
        Float32 FollowDistanceMax; // 0x30
        char pad_0x34[0xC];
        Core::LinearTransform LookAroundPivotTransform; // 0x40
        Core::LinearTransform FollowTargetTransform; // 0x80
        Core::LinearTransform LookAtTargetTransform; // 0xC0
        Core::Vec3 ConvergenceSpeeds; // 0x100
        Core::Vec3 MomentumPerAxis; // 0x110
        Core::Vec3 DampingPerAxis; // 0x120
        Core::Vec3 LandingConvergenceSpeeds; // 0x130
        Core::Vec3 LandingMomentumPerAxis; // 0x140
        Core::Vec3 LandingDampingPerAxis; // 0x150
        Core::Vec3 LookTargetOffset; // 0x160
        Float32 FollowDistanceChangeSpeed; // 0x170
        Float32 FollowHeight; // 0x174
        Float32 RefMaxSpeed; // 0x178
        char pad_0x17C[0x4];
        Core::AudioCurve FollowDistanceCurve; // 0x180
        Core::AudioCurve FollowDistanceMaxCurve; // 0x190
        Core::AudioCurve FollowDistanceChangeSpeedCurve; // 0x1A0
        Core::AudioCurve FollowHeightCurve; // 0x1B0
        Float32 ReferenceUpBlendBody; // 0x1C0
        Float32 ReferenceUpBlendWorld; // 0x1C4
        Float32 ReferenceUpBlendCamera; // 0x1C8
        Float32 StartReversingSpeedThreshold; // 0x1CC
        Float32 MaxLandingIntensityThreshold; // 0x1D0
        Float32 MinLandingIntensityThreshold; // 0x1D4
        Float32 LandingParamsDuration; // 0x1D8
        char pad_0x1DC[0x4];
        Core::AudioCurve ImpactForceToHeightMultiplierCurve; // 0x1E0
        Float32 InAirLookCOMWeight; // 0x1F0
        Float32 VelocityBasedLookAtMinSpeed; // 0x1F4
        Float32 VelocityBasedLookAtMaxSpeed; // 0x1F8
        Float32 LookAtBlendBetweenDirectionAndVelocity; // 0x1FC
        Float32 LookCOMWeight; // 0x200
        Float32 MoveTargetFlattening; // 0x204
        Float32 LookLerp; // 0x208
        char pad_0x20C[0x4];
        Core::AudioCurve AngleToLookCOMWeightCurve; // 0x210
        Float32 PillMinimumCollisionRadius; // 0x220
        Float32 PillMaximumCollisionRadius; // 0x224
        Float32 PillMinimumCollisionLenght; // 0x228
        Float32 UseWorldUpForLookAround; // 0x22C
        Float32 LookaroundRawInputYaw; // 0x230
        Float32 LookaroundRawInputPitch; // 0x234
        Int32 CameraLookForward; // 0x238
        Int32 CameraLookSide; // 0x23C
        Int32 CameraLookDelta; // 0x240
        Int32 CameraLookBack; // 0x244
        Boolean SpeedControl; // 0x248
        Boolean EnableInAirLandingLogic; // 0x249
        Boolean ParamsOverride; // 0x24A
        Boolean UseAngleToLookCOMWeightCurve; // 0x24B
        Boolean UseLookaroundRawInputYaw; // 0x24C
        Boolean UseLookaroundRawInputPitch; // 0x24D
        char pad_0x24E[0x2];
    }; // 0x250
    static_assert(sizeof(PhysicalCameraTransformerEntityData) == 0x250);
}
#pragma pack(pop)