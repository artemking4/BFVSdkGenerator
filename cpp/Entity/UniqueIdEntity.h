// Object: UniqueIdEntity
// ClassId: 8237
// RuntimeId: 16017
// TypeInfo: 0x0000000144ED0430
#include "../Entity/Entity.h"

namespace Entity {
    class UniqueIdEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(UniqueIdEntity) == 0x30);
}