// Object: ServerPersistenceRoundHandlerEntity
// ClassId: 7639
// RuntimeId: 49572
// TypeInfo: 0x0000000144CEF620
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceRoundHandlerEntity : public Entity::Entity {
        char pad_0x20[0x178];
    }; // 0x198
    static_assert(sizeof(ServerPersistenceRoundHandlerEntity) == 0x198);
}