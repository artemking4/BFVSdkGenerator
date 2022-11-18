// Object: ServerLocalPlayerGateEntity
// ClassId: 7595
// RuntimeId: 15450
// TypeInfo: 0x0000000144E588C0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerLocalPlayerGateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerLocalPlayerGateEntity) == 0x30);
}