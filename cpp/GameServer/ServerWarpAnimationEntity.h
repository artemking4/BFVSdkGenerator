// Object: ServerWarpAnimationEntity
// ClassId: 7787
// RuntimeId: 42131
// TypeInfo: 0x0000000144E5B190
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerWarpAnimationEntity : public Entity::Entity {
        char pad_0x20[0x1D0];
    }; // 0x1F0
    static_assert(sizeof(ServerWarpAnimationEntity) == 0x1F0);
}