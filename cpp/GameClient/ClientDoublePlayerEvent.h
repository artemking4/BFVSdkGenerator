// Object: ClientDoublePlayerEvent
// ClassId: 8300
// RuntimeId: 33472
// TypeInfo: 0x0000000144E34A00
#include "../GameClient/ClientPlayerEvent.h"

namespace GameClient {
    class ClientDoublePlayerEvent : public GameClient::ClientPlayerEvent {
        char pad_0x18[0x8];
    }; // 0x20
    static_assert(sizeof(ClientDoublePlayerEvent) == 0x20);
}