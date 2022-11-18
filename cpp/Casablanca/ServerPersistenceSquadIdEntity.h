// Object: ServerPersistenceSquadIdEntity
// ClassId: 7645
// RuntimeId: 48269
// TypeInfo: 0x0000000144CEEFC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSquadIdEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerPersistenceSquadIdEntity) == 0x40);
}