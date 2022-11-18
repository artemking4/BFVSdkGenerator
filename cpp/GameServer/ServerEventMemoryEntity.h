// Object: ServerEventMemoryEntity
// ClassId: 7545
// RuntimeId: 62240
// TypeInfo: 0x0000000144E5CC70
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerEventMemoryEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerEventMemoryEntity) == 0x38);
}