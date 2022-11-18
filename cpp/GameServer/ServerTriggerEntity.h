// Object: ServerTriggerEntity
// ClassId: 7760
// RuntimeId: 1622
// TypeInfo: 0x0000000144E63370
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTriggerEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerTriggerEntity) == 0x80);
}