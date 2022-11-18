// Object: ServerEventSyncEntity
// ClassId: 7546
// RuntimeId: 43996
// TypeInfo: 0x0000000144E58AE0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerEventSyncEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerEventSyncEntity) == 0x40);
}