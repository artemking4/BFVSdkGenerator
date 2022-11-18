// Object: ServerPersistenceOnPlayerHealedHandlerEntity
// ClassId: 7620
// RuntimeId: 40565
// TypeInfo: 0x0000000144CEDFB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceOnPlayerHealedHandlerEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ServerPersistenceOnPlayerHealedHandlerEntity) == 0xD8);
}