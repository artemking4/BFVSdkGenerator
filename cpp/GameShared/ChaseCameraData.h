// Object: ChaseCameraData
// ClassId: 1682
// RuntimeId: 43333
// TypeInfo: 0x0000000144E83940
#include "../GameShared/TargetCameraData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/ProfileOptionDataBool.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ChaseCameraData : public GameShared::TargetCameraData {
        Core::Vec3 TargetOffset; // 0x90
        Core::Vec3 ToWantedPositionScale; // 0xA0
        Float32 TargetRotationOffset; // 0xB0
        Float32 MaxViewRotationAngleDeg; // 0xB4
        Float32 WantedAngleDeg; // 0xB8
        Float32 WantedDistance; // 0xBC
        Float32 MaxDistance; // 0xC0
        Float32 SnapDistance; // 0xC4
        Float32 ResetDistance; // 0xC8
        Float32 ForceFieldRadius; // 0xCC
        Float32 CollisionRadius; // 0xD0
        Float32 ForceFieldForceScale; // 0xD4
        Float32 AwayFromTargetForceScale; // 0xD8
        Float32 VelocityDrag; // 0xDC
        Float32 MaxVelocity; // 0xE0
        Float32 PillMinimumCollisionRadius; // 0xE4
        Float32 PillMaximumCollisionRadius; // 0xE8
        Float32 PillMinimumCollisionLength; // 0xEC
        Float32 PillExpandSizeSpeedAcceleration; // 0xF0
        Float32 LookDistanceScale; // 0xF4
        Float32 LookDistanceInFrontOfTarget; // 0xF8
        char pad_0xFC[0x4];
        GameShared::ProfileOptionDataBool RollWithTargetProfileOption; // 0x100
        Uint32 UpdateRate; // 0x108
        Boolean KeepTargetPitch; // 0x10C
        Boolean ShouldRollWithTarget; // 0x10D
        Boolean InheritTargetVelocity; // 0x10E
        Boolean BypassChaseCalculations; // 0x10F
        Boolean BypassChaseCalculationsX; // 0x110
        Boolean BypassChaseCalculationsY; // 0x111
        Boolean BypassChaseCalculationsZ; // 0x112
        Boolean AltBypassChaseCalculationsX; // 0x113
        Boolean AltBypassChaseCalculationsY; // 0x114
        Boolean AltBypassChaseCalculationsZ; // 0x115
        Boolean HasCollisionAgainstTarget; // 0x116
        Boolean IgnoreCollisionInChaseCalculations; // 0x117
        Boolean HasCollision; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(ChaseCameraData) == 0x120);
}
#pragma pack(pop)