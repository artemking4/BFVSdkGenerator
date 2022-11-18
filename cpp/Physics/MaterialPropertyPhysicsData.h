// Object: MaterialPropertyPhysicsData
// ClassId: 4256
// RuntimeId: 42644
// TypeInfo: 0x0000000144F0FB80
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Global/Float32.h"
#include "../Physics/FrictionCombinationType.h"

#pragma pack(push, 8)
namespace Physics {
    class MaterialPropertyPhysicsData : public Entity::PhysicsMaterialRelationPropertyData {
        Float32 DynamicFriction; // 0x20
        Float32 StaticFriction; // 0x24
        Float32 Restitution; // 0x28
        Physics::FrictionCombinationType FrictionCombinationMethod; // 0x2C
        Float32 DynamicFrictionModifier; // 0x30
        Float32 StaticFrictionModifier; // 0x34
        Float32 RestitutionModifier; // 0x38
        Float32 Resistance; // 0x3C
    }; // 0x40
    static_assert(sizeof(MaterialPropertyPhysicsData) == 0x40);
}
#pragma pack(pop)