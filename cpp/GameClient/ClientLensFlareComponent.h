// Object: ClientLensFlareComponent
// ClassId: 5845
// RuntimeId: 3122
// TypeInfo: 0x0000000144E410A0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientLensFlareComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientLensFlareComponent) == 0x48);
}