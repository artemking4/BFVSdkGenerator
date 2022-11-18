// Object: OrEntity
// ClassId: 7289
// RuntimeId: 41747
// TypeInfo: 0x0000000144ED0FE0
#include "../Entity/Entity.h"

namespace Entity {
    class OrEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(OrEntity) == 0x40);
}