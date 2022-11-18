// Object: ServerDamageGiverEvent
// ClassId: 8310
// RuntimeId: 12582
// TypeInfo: 0x0000000144E5C7B0
#include "../GameServer/ServerPlayerEvent.h"

namespace GameServer {
    class ServerDamageGiverEvent : public GameServer::ServerPlayerEvent {
        char pad_0x28[0x80];
    }; // 0xA8
    static_assert(sizeof(ServerDamageGiverEvent) == 0xA8);
}