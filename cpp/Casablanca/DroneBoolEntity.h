// Object: DroneBoolEntity
// ClassId: 7130
// RuntimeId: 57897
// TypeInfo: 0x0000000144C8C720
#include "../Entity/Entity.h"

namespace Casablanca {
    class DroneBoolEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DroneBoolEntity) == 0x38);
}