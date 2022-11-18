// Object: PropertyCacheEntity
// ClassId: 7325
// RuntimeId: 45304
// TypeInfo: 0x0000000144CD9C80
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyCacheEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(PropertyCacheEntity) == 0x40);
}