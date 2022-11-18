// Object: ServerPersistenceTidesOfWarHandlerEntity
// ClassId: 7647
// RuntimeId: 18036
// TypeInfo: 0x0000000144CEEDA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceTidesOfWarHandlerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerPersistenceTidesOfWarHandlerEntity) == 0x58);
}