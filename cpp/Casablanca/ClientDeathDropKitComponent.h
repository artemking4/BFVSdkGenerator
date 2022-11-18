// Object: ClientDeathDropKitComponent
// ClassId: 5815
// RuntimeId: 3393
// TypeInfo: 0x0000000144C46350
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientDeathDropKitComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x338];
    }; // 0x370
    static_assert(sizeof(ClientDeathDropKitComponent) == 0x370);
}