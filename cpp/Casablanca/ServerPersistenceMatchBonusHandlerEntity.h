// Object: ServerPersistenceMatchBonusHandlerEntity
// ClassId: 7617
// RuntimeId: 54368
// TypeInfo: 0x0000000144CE49B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceMatchBonusHandlerEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerPersistenceMatchBonusHandlerEntity) == 0x120);
}