// Object: ServerPersistenceDeathHandlerEntity
// ClassId: 7615
// RuntimeId: 6898
// TypeInfo: 0x0000000144CE4BD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceDeathHandlerEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerPersistenceDeathHandlerEntity) == 0x48);
}