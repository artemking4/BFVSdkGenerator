// Object: NotEntity
// ClassId: 7269
// RuntimeId: 58491
// TypeInfo: 0x0000000144ED1200
#include "../Entity/Entity.h"

namespace Entity {
    class NotEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(NotEntity) == 0x38);
}