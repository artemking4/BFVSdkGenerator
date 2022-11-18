// Object: PhysicsRagdollConstraintData
// ClassId: 2989
// RuntimeId: 51608
// TypeInfo: 0x0000000144F0EE00
#include "../Physics/PhysicsConstraintData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsRagdollConstraintData : public Physics::PhysicsConstraintData {
        Float32 TwistMinAngularLimit; // 0x90
        Float32 TwistMaxAngularLimit; // 0x94
        Float32 PlaneMinAngularLimit; // 0x98
        Float32 PlaneMaxAngularLimit; // 0x9C
        Float32 ConeAngularLimit; // 0xA0
        Float32 AngularFriction; // 0xA4
        Float32 AngularStiffness; // 0xA8
        Boolean HasLimits; // 0xAC
        char pad_0xAD[0x3];
    }; // 0xB0
    static_assert(sizeof(PhysicsRagdollConstraintData) == 0xB0);
}
#pragma pack(pop)