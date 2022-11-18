// Object: ServerKillAllEntity
// ClassId: 7583
// RuntimeId: 4452
// TypeInfo: 0x0000000144E63B60
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerKillAllEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerKillAllEntity) == 0x30);
}