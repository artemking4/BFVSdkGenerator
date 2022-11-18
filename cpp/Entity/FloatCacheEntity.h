// Object: FloatCacheEntity
// ClassId: 7169
// RuntimeId: 33196
// TypeInfo: 0x0000000144ED98C0
#include "../Entity/Entity.h"

namespace Entity {
    class FloatCacheEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(FloatCacheEntity) == 0x38);
}