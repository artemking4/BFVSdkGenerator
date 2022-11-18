// Object: ServerEventIfSwitchEntity
// ClassId: 7544
// RuntimeId: 24226
// TypeInfo: 0x0000000144E5CD80
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerEventIfSwitchEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerEventIfSwitchEntity) == 0x38);
}