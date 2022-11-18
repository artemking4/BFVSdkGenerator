// Object: FollowPlayerEntityData
// ClassId: 2761
// RuntimeId: 43378
// TypeInfo: 0x0000000144D0A330
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/FollowPlayerMode.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CollidableCameraData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FollowPlayerEntityData : public Entity::EntityData {
        Float32 PitchSpeed; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Pivot; // 0x30
        Core::Vec3 VehiclePivot; // 0x40
        CasablancaShared::CollidableCameraData CollidableCameraData; // 0x50
        Float32 YawSpeed; // 0x70
        Float32 DistanceToSoldier; // 0x74
        Float32 DistanceToVehicle; // 0x78
        Float32 InitialPitchAngle; // 0x7C
        Float32 PitchAngleMin; // 0x80
        Float32 PitchAngleMax; // 0x84
        Float32 InitialYawAngle; // 0x88
        CasablancaShared::FollowPlayerMode FollowMode; // 0x8C
        Float32 SpottingDistance; // 0x90
        Float32 CameraSoftness; // 0x94
        Float32 AdditionalCameraCollisionRadius; // 0x98
        Float32 ChangePlayerDelay; // 0x9C
        Float32 InterpolateCameraTransformDuration; // 0xA0
        char pad_0xA4[0x4];
        CasablancaShared::BFUIPlayerObject PlayerToFollow; // 0xA8
        Boolean FallbackToTeamMode; // 0xB0
        Boolean InterpolateCameraTransform; // 0xB1
        char pad_0xB2[0xE];
    }; // 0xC0
    static_assert(sizeof(FollowPlayerEntityData) == 0xC0);
}
#pragma pack(pop)