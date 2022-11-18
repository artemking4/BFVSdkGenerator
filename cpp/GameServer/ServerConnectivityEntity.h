// Object: ServerConnectivityEntity
// ClassId: 7470
// RuntimeId: 64920
// TypeInfo: 0x0000000144E5EFA0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerConnectivityEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerConnectivityEntity) == 0x30);
}