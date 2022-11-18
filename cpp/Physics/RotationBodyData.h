// Object: RotationBodyData
// ClassId: 4324
// RuntimeId: 21994
// TypeInfo: 0x0000000144F0E040
#include "../Physics/MovingBodyData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Physics/ExtendedConstraintsData.h"

#pragma pack(push, 8)
namespace Physics {
    class RotationBodyData : public Physics::MovingBodyData {
        Float32 AngularMomentumMultiplier; // 0x20
        Float32 AngularMomentumThreshold; // 0x24
        Float32 AngularMomentumDampingAcc; // 0x28
        Float32 AngularMomentumDampingDeacc; // 0x2C
        Float32 AngularConstraintMin; // 0x30
        Float32 AngularConstraintMax; // 0x34
        Int32 RotationAxis; // 0x38
        char pad_0x3C[0x4];
        Physics::ExtendedConstraintsData ExtendedConstraints; // 0x40
        Boolean UsePostSatisfyConstraints; // 0x48
        Boolean UseAngularMomentumThreshold; // 0x49
        Boolean UseAngularMomentumDamping; // 0x4A
        Boolean UseAngularConstraint; // 0x4B
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(RotationBodyData) == 0x50);
}
#pragma pack(pop)