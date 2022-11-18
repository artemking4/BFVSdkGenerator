// Object: MessageReceivedEvent
// ClassId: 8426
// RuntimeId: 4449
// TypeInfo: 0x0000000144CF3450
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class MessageReceivedEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(MessageReceivedEvent) == 0x10);
}