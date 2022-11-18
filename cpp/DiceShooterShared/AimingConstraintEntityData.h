// Object: AimingConstraintEntityData
// ClassId: 2037
// RuntimeId: 33157
// TypeInfo: 0x0000000144DF35F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AimingConstraintEntityData : public Entity::EntityData {
        Int32 ConstraintPriority; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform ConstraintFollowTransform; // 0x30
        GameShared::AimingConstraintsData AimingConstraints; // 0x70
        Float32 MinYawIn; // 0x80
        Float32 MaxYawIn; // 0x84
        Float32 MinPitchIn; // 0x88
        Float32 MaxPitchIn; // 0x8C
        Boolean Enabled; // 0x90
        Boolean EnableRelativeFollowTransformYaw; // 0x91
        Boolean EnableRelativeFollowTransformPitch; // 0x92
        char pad_0x93[0xD];
    }; // 0xA0
    static_assert(sizeof(AimingConstraintEntityData) == 0xA0);
}
#pragma pack(pop)