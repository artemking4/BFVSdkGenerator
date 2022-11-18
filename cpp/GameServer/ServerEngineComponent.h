// Object: ServerEngineComponent
// ClassId: 5987
// RuntimeId: 43427
// TypeInfo: 0x0000000144E62060
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerEngineComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ServerEngineComponent) == 0xA0);
}