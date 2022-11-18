// Object: ClientWaterDepthComponent
// ClassId: 5914
// RuntimeId: 37867
// TypeInfo: 0x0000000144E44180
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientWaterDepthComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ClientWaterDepthComponent) == 0x70);
}