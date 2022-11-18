// Object: ServerPersistenceResupplyHandlerEntity
// ClassId: 7637
// RuntimeId: 31904
// TypeInfo: 0x0000000144CECDA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceResupplyHandlerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerPersistenceResupplyHandlerEntity) == 0x70);
}