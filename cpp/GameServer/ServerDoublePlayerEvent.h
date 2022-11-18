// Object: ServerDoublePlayerEvent
// ClassId: 8311
// RuntimeId: 62446
// TypeInfo: 0x0000000144E5C510
#include "../GameServer/ServerPlayerEvent.h"

namespace GameServer {
    class ServerDoublePlayerEvent : public GameServer::ServerPlayerEvent {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ServerDoublePlayerEvent) == 0x30);
}