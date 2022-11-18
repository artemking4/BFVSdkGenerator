// Object: ServerWaterDepthComponent
// ClassId: 6058
// RuntimeId: 54260
// TypeInfo: 0x0000000144E62260
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerWaterDepthComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ServerWaterDepthComponent) == 0x68);
}