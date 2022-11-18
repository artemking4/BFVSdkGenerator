// Object: ServerContextCacheEntity
// ClassId: 7471
// RuntimeId: 139
// TypeInfo: 0x0000000144CE5120
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerContextCacheEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerContextCacheEntity) == 0x40);
}