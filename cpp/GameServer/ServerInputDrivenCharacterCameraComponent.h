// Object: ServerInputDrivenCharacterCameraComponent
// ClassId: 5967
// RuntimeId: 41473
// TypeInfo: 0x0000000144E5AD00
#include "../GameServer/ServerCharacterCameraComponent.h"

namespace GameServer {
    class ServerInputDrivenCharacterCameraComponent : public GameServer::ServerCharacterCameraComponent {
        char pad_0x40[0x60];
    }; // 0xA0
    static_assert(sizeof(ServerInputDrivenCharacterCameraComponent) == 0xA0);
}