// Object: ServerBreakablePartComponent
// ClassId: 5964
// RuntimeId: 36866
// TypeInfo: 0x0000000144E5E190
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerBreakablePartComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xE8];
    }; // 0x120
    static_assert(sizeof(ServerBreakablePartComponent) == 0x120);
}