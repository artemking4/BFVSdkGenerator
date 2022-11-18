// Object: ClientEngineComponent
// ClassId: 5822
// RuntimeId: 8494
// TypeInfo: 0x0000000144E44080
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientEngineComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x2C0];
    }; // 0x2F8
    static_assert(sizeof(ClientEngineComponent) == 0x2F8);
}