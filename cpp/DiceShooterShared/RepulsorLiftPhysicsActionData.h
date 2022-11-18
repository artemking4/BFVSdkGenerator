// Object: RepulsorLiftPhysicsActionData
// ClassId: 2961
// RuntimeId: 62743
// TypeInfo: 0x0000000144DED3A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../Core/AudioCurve.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class RepulsorLiftPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::Vec3 HeightSteerRate; // 0x60
        Core::Vec3 FrontOffset; // 0x70
        Core::Vec3 RearOffset; // 0x80
        Core::Vec3 RaycastSteerRate; // 0x90
        Core::Vec3 MaxHeightCastOriginOffsetLocalSpace; // 0xA0
        Int32 HeightSteerInputAction; // 0xB0
        char pad_0xB4[0x4];
        Core::AudioCurve HeightCurve; // 0xB8
        Float32 HoverHeightNoPlayer; // 0xC8
        char pad_0xCC[0x4];
        Core::AudioCurve GravityCurve; // 0xD0
        Float32 ExtraGravity; // 0xE0
        Float32 ExtrapolateTime; // 0xE4
        Float32 FrontDownExtrapolateTime; // 0xE8
        Float32 MinHitNormalY; // 0xEC
        Float32 HoverHeight; // 0xF0
        Float32 RaycastHeightMultiplier; // 0xF4
        Float32 RaycastInputSteerAmount; // 0xF8
        Int32 RaycastSteerInputAction; // 0xFC
        Uint32 ForwardRaycastCount; // 0x100
        Float32 OverCast; // 0x104
        Float32 OverCast2; // 0x108
        Float32 CastWidth; // 0x10C
        Float32 MinSampleDist; // 0x110
        Float32 MaxSlope; // 0x114
        Float32 OverWallLookAhead; // 0x118
        Float32 StdDevSpring; // 0x11C
        Float32 StdDevBumper; // 0x120
        Float32 SpringC; // 0x124
        Float32 CollisionSpringStrength; // 0x128
        Float32 CollisionSpringMinDistance; // 0x12C
        Float32 MinReasonableSpeed; // 0x130
        Float32 MaxForwardsAngle; // 0x134
        Float32 ForwardsSmoothing; // 0x138
        char pad_0x13C[0x4];
        Core::AudioCurve ForcePerVerticalVelocityCurve; // 0x140
        Float32 MaxVelSlope; // 0x150
        Float32 RepulsorStrength; // 0x154
        Float32 MaxSlopeForPositiveRepulsor; // 0x158
        Float32 RepulsorStrengthPositive; // 0x15C
        Float32 RepulsorStrengthNegative; // 0x160
        Float32 RepulsorDampingPositive; // 0x164
        Float32 RepulsorDampingNegative; // 0x168
        Float32 RepulsorDampingPositiveNonCritical; // 0x16C
        Float32 RepulsorDampingNegativeNonCritical; // 0x170
        Float32 SamplePurgeMinSideDistance; // 0x174
        Float32 HeightForceFadeStart; // 0x178
        Float32 HeightForceFadeEnd; // 0x17C
        Float32 VelocitySlopeScalar; // 0x180
        Float32 RepulsorDamping; // 0x184
        Float32 MaxForce; // 0x188
        Float32 TargetHoverHeight; // 0x18C
        Float32 MaxHeightRaycastLength; // 0x190
        Float32 MaxHeightClearance; // 0x194
        Float32 MinGroundClearance; // 0x198
        Float32 MaxHeightUpAdjustmentSpeed; // 0x19C
        Float32 MaxHeightDownAdjustmentSpeed; // 0x1A0
        Float32 YInterceptLerp; // 0x1A4
        Float32 SlopeLerp; // 0x1A8
        Float32 StandardDeviationLerp; // 0x1AC
        Boolean AllowHeightCurveOverride; // 0x1B0
        char pad_0x1B1[0xF];
    }; // 0x1C0
    static_assert(sizeof(RepulsorLiftPhysicsActionData) == 0x1C0);
}
#pragma pack(pop)