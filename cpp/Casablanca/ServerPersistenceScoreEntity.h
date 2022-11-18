// Object: ServerPersistenceScoreEntity
// ClassId: 7641
// RuntimeId: 35796
// TypeInfo: 0x0000000144CEF400
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceScoreEntity : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(ServerPersistenceScoreEntity) == 0x130);
}