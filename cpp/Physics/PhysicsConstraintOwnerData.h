// Object: PhysicsConstraintOwnerData
// ClassId: 2996
// RuntimeId: 20483
// TypeInfo: 0x0000000144F0EF80
#include "../Entity/EntityData.h"
#include "../Physics/PhysicsConstraintData.h"

#pragma pack(push, 8)
namespace Physics {
    class PhysicsConstraintOwnerData : public Entity::EntityData {
        Physics::PhysicsConstraintData ConstraintData; // 0x20
    }; // 0x28
    static_assert(sizeof(PhysicsConstraintOwnerData) == 0x28);
}
#pragma pack(pop)