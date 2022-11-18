// Object: PhysicsComponentData
// ClassId: 1945
// RuntimeId: 2995
// TypeInfo: 0x0000000144F0FA80
#include "../Entity/ComponentData.h"
#include "../Physics/PhysicsBodyData.h"
#include "../Physics/PhysicsConstraintData.h"
#include "../Physics/PhysicsPartData.h"
#include "../Global/Boolean.h"
#include "../Physics/InternalCollisionDisablingBehavior.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsComponentData : public Entity::ComponentData {
        Array<Physics::PhysicsBodyData> PhysicsBodies; // 0x80
        Array<Physics::PhysicsConstraintData> PhysicsConstraints; // 0x88
        Array<Physics::PhysicsPartData> Parts; // 0x90
        Physics::InternalCollisionDisablingBehavior InternalCollisionDisabling; // 0x98
        Boolean MovableParts; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(PhysicsComponentData) == 0xA0);
}
#pragma pack(pop)