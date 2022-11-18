// Object: ServerPersistenceDestroyHandlerEntity
// ClassId: 7616
// RuntimeId: 28822
// TypeInfo: 0x0000000144CE4AC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceDestroyHandlerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerPersistenceDestroyHandlerEntity) == 0x70);
}