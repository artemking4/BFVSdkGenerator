// Object: ServerPersistenceSpawnHandlerEntity
// ClassId: 7642
// RuntimeId: 50733
// TypeInfo: 0x0000000144CEF2F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSpawnHandlerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerPersistenceSpawnHandlerEntity) == 0x70);
}