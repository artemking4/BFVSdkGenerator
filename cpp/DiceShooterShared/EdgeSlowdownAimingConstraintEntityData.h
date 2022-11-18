// Object: EdgeSlowdownAimingConstraintEntityData
// ClassId: 2681
// RuntimeId: 538
// TypeInfo: 0x0000000144DF3570
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class EdgeSlowdownAimingConstraintEntityData : public Entity::EntityData {
        Int32 ConstraintPriority; // 0x20
        GameShared::AimingConstraintsData AimingConstraints; // 0x24
        Float32 DisableAimingConstraintsDelay; // 0x34
        Float32 ConstraintMoveSpeedMultiplier; // 0x38
        Boolean Enabled; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(EdgeSlowdownAimingConstraintEntityData) == 0x40);
}
#pragma pack(pop)