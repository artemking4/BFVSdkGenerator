// Object: ServerCharacterCameraComponent
// ClassId: 5966
// RuntimeId: 63463
// TypeInfo: 0x0000000144E5AF00
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerCharacterCameraComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerCharacterCameraComponent) == 0x40);
}