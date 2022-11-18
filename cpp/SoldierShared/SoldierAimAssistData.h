// Object: SoldierAimAssistData
// ClassId: 4077
// RuntimeId: 11572
// TypeInfo: 0x0000000144F43C30
#include "../Core/GameDataContainer.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"
#include "../GameShared/ProfileOptionDataFloat.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../GameShared/SkeletonCollisionData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierAimAssistData : public Core::GameDataContainer {
        Array<Float32> InputPolynomialDEPRECATED; // 0x18
        Array<Float32> ZoomedInputPolynomialDEPRECATED; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 StickyBoxScale; // 0x30
        Core::Vec3 StickyDistanceScale; // 0x40
        Core::Vec3 SnapBoxScale; // 0x50
        Core::Vec3 SnapDistanceScale; // 0x60
        Core::Vec3 EyePosOffset; // 0x70
        Core::FloatCurve InputCurve; // 0x80
        Core::FloatCurve ZoomedInputCurve; // 0x88
        GameShared::ProfileOptionDataFloat UseYawAccelerationAmount; // 0x90
        GameShared::ProfileOptionDataFloat UsePitchAccelerationAmount; // 0x98
        GameShared::ProfileOptionDataFloat PitchSpeedRatioMouseNoZoom; // 0xA0
        GameShared::ProfileOptionDataFloat PitchSpeedRatioMouseZoom; // 0xA8
        GameShared::ProfileOptionDataFloat PitchSpeedRatioStickNoZoom; // 0xB0
        GameShared::ProfileOptionDataFloat PitchSpeedRatioStickZoom; // 0xB8
        Float32 AccelerationInputThreshold; // 0xC0
        Float32 AccelerationMultiplier; // 0xC4
        Float32 AccelerationDamping; // 0xC8
        Float32 AccelerationTimeThreshold; // 0xCC
        Float32 SquaredAcceleration; // 0xD0
        Core::Vec2 MaxAcceleration; // 0xD4
        Float32 YawSpeedStrength; // 0xDC
        Float32 PitchSpeedStrength; // 0xE0
        Float32 NoAccelYawSpeedStrengthMultiplier; // 0xE4
        Float32 NoAccelPitchSpeedStrengthMultiplier; // 0xE8
        Core::Vec2 AttractDistanceFallOffs; // 0xEC
        Float32 AttractSoftZone; // 0xF4
        Float32 AttractUserInputMultiplier; // 0xF8
        Float32 AttractUserInputMultiplier_NoZoom; // 0xFC
        Float32 AttractOwnSpeedInfluence; // 0x100
        Float32 AttractTargetSpeedInfluence; // 0x104
        Float32 AttractOwnRequiredMovementForMaximumAttract; // 0x108
        Float32 AttractStartInputThreshold; // 0x10C
        Float32 AttractMoveInputCap; // 0x110
        Float32 AttractYawStrength; // 0x114
        Float32 AttractPitchStrength; // 0x118
        Float32 MaxToTargetAngle; // 0x11C
        Float32 MaxToTargetXZAngle; // 0x120
        Float32 ViewObstructedKeepTime; // 0x124
        Float32 SnapZoomLateralSpeedLimit; // 0x128
        Float32 SnapZoomTime; // 0x12C
        Float32 SnapZoomPostTimeNoInput; // 0x130
        Float32 SnapZoomPostTime; // 0x134
        Uint32 SnapZoomReticlePointPriority; // 0x138
        Float32 SnapZoomAutoEngageTime; // 0x13C
        Float32 SnapZoomBreakTimeAtMaxInput; // 0x140
        Float32 SnapZoomBreakMaxInput; // 0x144
        Float32 SnapZoomBreakMinAngle; // 0x148
        Float32 SnapZoomSpamGuardTime; // 0x14C
        GameShared::SkeletonCollisionData SoldierBackupSkeletonCollisionData; // 0x150
        Float32 CheckBoneCenterOnlyDistance; // 0x158
        Float32 DisableForcedTargetRecalcDistance; // 0x15C
        Float32 OverrideAimingRange; // 0x160
        Float32 OverrideAimingRangeCrouch; // 0x164
        Float32 OverrideAimingRangeProne; // 0x168
        char pad_0x16C[0x4];
        GameShared::ProfileOptionDataFloat StickyAndAttractProfileOption; // 0x170
        GameShared::ProfileOptionDataFloat SnapZoomProfileOption; // 0x178
        Boolean UseYawAcceleration; // 0x180
        Boolean UsePitchAcceleration; // 0x181
        Boolean SnapZoomUserShorterWeaponTime; // 0x182
        Boolean SnapZoomPostTimeDynamicPoint; // 0x183
        Boolean ForceSoldierBackupSkeletonCollisionUse; // 0x184
        char pad_0x185[0xB];
    }; // 0x190
    static_assert(sizeof(SoldierAimAssistData) == 0x190);
}
#pragma pack(pop)