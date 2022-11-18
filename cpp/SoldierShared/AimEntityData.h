// Object: AimEntityData
// ClassId: 2031
// RuntimeId: 58672
// TypeInfo: 0x0000000144F3A190
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SoldierAimingSimulationData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class AimEntityData : public Entity::EntityData {
        SoldierShared::SoldierAimingSimulationData DefaultAimingController; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 AimOriginOffset; // 0x30
        Core::LinearTransform AimOverrideTransform; // 0x40
        Core::Vec3 FollowOffset; // 0x80
        Int32 YawInput; // 0x90
        Int32 PitchInput; // 0x94
        Int32 ThrottleInput; // 0x98
        Int32 StrafeInput; // 0x9C
        Int32 ZoomLevelInput; // 0xA0
        Float32 TimeToDelayAfterCollision; // 0xA4
        Float32 CollisionBlendOut; // 0xA8
        Float32 SuppressionValue; // 0xAC
        Boolean Excluded; // 0xB0
        Boolean AllowBlendOut; // 0xB1
        Boolean OverrideAim; // 0xB2
        Boolean AimAtLastHitPosition; // 0xB3
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(AimEntityData) == 0xC0);
}
#pragma pack(pop)