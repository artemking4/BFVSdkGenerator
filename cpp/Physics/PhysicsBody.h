// Object: PhysicsBody
// ClassId: 7297
// RuntimeId: 18707
// TypeInfo: 0x0000000144F13B40
#include "../Entity/Entity.h"

namespace Physics {
    class PhysicsBody : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(PhysicsBody) == 0x48);
}