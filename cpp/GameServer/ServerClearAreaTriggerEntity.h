// Object: ServerClearAreaTriggerEntity
// ClassId: 7465
// RuntimeId: 32637
// TypeInfo: 0x0000000144E641C0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerClearAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerClearAreaTriggerEntity) == 0x30);
}