// Object: ServerTeleportAreaEntity
// ClassId: 7749
// RuntimeId: 41793
// TypeInfo: 0x0000000144CDFDE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTeleportAreaEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerTeleportAreaEntity) == 0x30);
}