// Object: SimpleHeliCameraConfigEntityData
// ClassId: 3210
// RuntimeId: 3679
// TypeInfo: 0x0000000144DEE6A0
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SimpleHeliCameraConfigEntityData : public Entity::EntityData {
        Float32 LookAheadOffsetZ; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 CameraOffset; // 0x30
        Core::Vec3 CollisionSafePosition; // 0x40
        Core::Vec3 LerpAxisFactor; // 0x50
        Core::Vec3 FollowOffsetDeadZone; // 0x60
        Float32 LookTargetExtrapolation; // 0x70
        Float32 LookMaxLateralSteerOffset; // 0x74
        Float32 LookMaxSteerAngle; // 0x78
        Float32 CollisionLerpRate; // 0x7C
        Float32 CollisionRadius; // 0x80
        Float32 BoundingSphereScale; // 0x84
        Float32 FollowOffsetZ; // 0x88
        Float32 TargetUprightLerp; // 0x8C
        Float32 TargetUprightLerpSmoothing; // 0x90
        Float32 LookDirectionLerp; // 0x94
        Float32 Pitch; // 0x98
        Float32 MaxAllowedRollAngleCameraToTarget; // 0x9C
        Float32 CameraToTargetRollAngleSmoothing; // 0xA0
        Float32 MaxLagOffsetUp; // 0xA4
        Float32 MaxLagOffsetDown; // 0xA8
        Float32 LagOffsetLerpRate; // 0xAC
        Core::FloatCurve CameraToTargetRollResponseCurve; // 0xB0
        Core::FloatCurve CameraToTargetVelAgainstRollVelocityCurve; // 0xB8
        Core::FloatCurve CameraToTargetVelAgainstPitchYawVelocityCurve; // 0xC0
        Boolean LookTargetExtrapolateYawOnly; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(SimpleHeliCameraConfigEntityData) == 0xD0);
}
#pragma pack(pop)