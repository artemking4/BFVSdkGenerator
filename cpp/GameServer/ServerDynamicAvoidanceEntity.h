// Object: ServerDynamicAvoidanceEntity
// ClassId: 7531
// RuntimeId: 37367
// TypeInfo: 0x0000000144E5D2D0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerDynamicAvoidanceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerDynamicAvoidanceEntity) == 0x48);
}