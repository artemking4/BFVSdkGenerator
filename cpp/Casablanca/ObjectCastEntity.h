// Object: ObjectCastEntity
// ClassId: 7274
// RuntimeId: 42118
// TypeInfo: 0x0000000144C4B8E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ObjectCastEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ObjectCastEntity) == 0x38);
}