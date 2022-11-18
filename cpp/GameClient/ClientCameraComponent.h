// Object: ClientCameraComponent
// ClassId: 5804
// RuntimeId: 58311
// TypeInfo: 0x0000000144E35550
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientCameraComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x378];
    }; // 0x3B0
    static_assert(sizeof(ClientCameraComponent) == 0x3B0);
}