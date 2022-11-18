// Object: ServerPlayerEvent
// ClassId: 8309
// RuntimeId: 14462
// TypeInfo: 0x0000000144E5C490
#include "../Entity/EntityEvent.h"

namespace GameServer {
    class ServerPlayerEvent : public Entity::EntityEvent {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(ServerPlayerEvent) == 0x28);
}