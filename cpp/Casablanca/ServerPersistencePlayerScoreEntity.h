// Object: ServerPersistencePlayerScoreEntity
// ClassId: 7630
// RuntimeId: 10093
// TypeInfo: 0x0000000144CED510
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistencePlayerScoreEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerPersistencePlayerScoreEntity) == 0x50);
}