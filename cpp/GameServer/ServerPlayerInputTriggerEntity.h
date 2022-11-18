// Object: ServerPlayerInputTriggerEntity
// ClassId: 7670
// RuntimeId: 2886
// TypeInfo: 0x0000000144E63940
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerPlayerInputTriggerEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerPlayerInputTriggerEntity) == 0x60);
}