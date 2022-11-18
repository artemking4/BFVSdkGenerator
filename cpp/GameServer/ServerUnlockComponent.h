// Object: ServerUnlockComponent
// ClassId: 6051
// RuntimeId: 48798
// TypeInfo: 0x0000000144E59600
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerUnlockComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ServerUnlockComponent) == 0xB8);
}