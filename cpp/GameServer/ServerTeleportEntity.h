// Object: ServerTeleportEntity
// ClassId: 7750
// RuntimeId: 33180
// TypeInfo: 0x0000000144E603A0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTeleportEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerTeleportEntity) == 0x30);
}