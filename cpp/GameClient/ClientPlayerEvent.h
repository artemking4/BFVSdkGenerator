// Object: ClientPlayerEvent
// ClassId: 8299
// RuntimeId: 52405
// TypeInfo: 0x0000000144E34980
#include "../Entity/EntityEvent.h"

namespace GameClient {
    class ClientPlayerEvent : public Entity::EntityEvent {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(ClientPlayerEvent) == 0x18);
}