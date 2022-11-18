// Object: ClientLightComponent
// ClassId: 5846
// RuntimeId: 59353
// TypeInfo: 0x0000000144E41020
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientLightComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientLightComponent) == 0x40);
}