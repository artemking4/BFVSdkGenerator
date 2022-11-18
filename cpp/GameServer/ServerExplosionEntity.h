// Object: ServerExplosionEntity
// ClassId: 7547
// RuntimeId: 857
// TypeInfo: 0x0000000144E5C6A0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerExplosionEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ServerExplosionEntity) == 0x180);
}