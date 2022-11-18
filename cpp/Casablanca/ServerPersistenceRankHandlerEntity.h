// Object: ServerPersistenceRankHandlerEntity
// ClassId: 7632
// RuntimeId: 48431
// TypeInfo: 0x0000000144CED2F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceRankHandlerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerPersistenceRankHandlerEntity) == 0x70);
}