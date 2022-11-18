// Object: ServerPersistenceReviveHandlerEntity
// ClassId: 7638
// RuntimeId: 7674
// TypeInfo: 0x0000000144CECC90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceReviveHandlerEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerPersistenceReviveHandlerEntity) == 0x98);
}