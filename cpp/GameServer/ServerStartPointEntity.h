// Object: ServerStartPointEntity
// ClassId: 7731
// RuntimeId: 43710
// TypeInfo: 0x0000000144E586A0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerStartPointEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerStartPointEntity) == 0x38);
}