// Object: PhysicsHingeConstraintData
// ClassId: 2987
// RuntimeId: 22431
// TypeInfo: 0x0000000144F0EE80
#include "../Physics/PhysicsConstraintData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsHingeConstraintData : public Physics::PhysicsConstraintData {
        Float32 MinAngle; // 0x90
        Float32 MaxAngle; // 0x94
        Float32 AngularFriction; // 0x98
        Float32 AngularStiffness; // 0x9C
        Boolean HasLimits; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(PhysicsHingeConstraintData) == 0xB0);
}
#pragma pack(pop)