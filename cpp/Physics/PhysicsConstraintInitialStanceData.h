// Object: PhysicsConstraintInitialStanceData
// ClassId: 2991
// RuntimeId: 11820
// TypeInfo: 0x0000000144F0EC80
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Physics/PhysicsConstraintData.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsConstraintInitialStanceData : public Entity::EntityData {
        Physics::PhysicsConstraintData ContainingConstraintData; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(PhysicsConstraintInitialStanceData) == 0x70);
}
#pragma pack(pop)