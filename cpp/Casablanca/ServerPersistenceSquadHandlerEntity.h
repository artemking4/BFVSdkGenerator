// Object: ServerPersistenceSquadHandlerEntity
// ClassId: 7644
// RuntimeId: 19177
// TypeInfo: 0x0000000144CEF0D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSquadHandlerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerPersistenceSquadHandlerEntity) == 0x68);
}