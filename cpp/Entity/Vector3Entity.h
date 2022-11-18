// Object: Vector3Entity
// ClassId: 8257
// RuntimeId: 27841
// TypeInfo: 0x0000000144ED9AE0
#include "../Entity/Entity.h"

namespace Entity {
    class Vector3Entity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(Vector3Entity) == 0x38);
}