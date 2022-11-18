// Object: ServerPersistenceResetRoundEntity
// ClassId: 7636
// RuntimeId: 22727
// TypeInfo: 0x0000000144CECEB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceResetRoundEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerPersistenceResetRoundEntity) == 0x60);
}