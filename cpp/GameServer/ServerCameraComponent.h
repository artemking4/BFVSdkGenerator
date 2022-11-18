// Object: ServerCameraComponent
// ClassId: 5965
// RuntimeId: 62498
// TypeInfo: 0x0000000144E625E0
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerCameraComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ServerCameraComponent) == 0xB0);
}