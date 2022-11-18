// Object: ConstraintPhysicsActionData
// ClassId: 2950
// RuntimeId: 37373
// TypeInfo: 0x0000000144DEDAA0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ConstraintPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::Vec3 AabbMin; // 0x60
        Core::Vec3 AabbMax; // 0x70
        Core::Vec3 AabbFadeRange; // 0x80
        Core::Vec3 AabbSmoothTime; // 0x90
        Core::Vec3 RotMin; // 0xA0
        Core::Vec3 RotMax; // 0xB0
        Core::Vec3 RotFadeRange; // 0xC0
        Core::Vec3 RotSmoothTime; // 0xD0
        Boolean ClampAtMaxVehicleHeight; // 0xE0
        Boolean LevelOffWhenAboveAabbMax; // 0xE1
        char pad_0xE2[0xE];
    }; // 0xF0
    static_assert(sizeof(ConstraintPhysicsActionData) == 0xF0);
}
#pragma pack(pop)