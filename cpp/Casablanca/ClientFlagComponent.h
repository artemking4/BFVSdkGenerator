// Object: ClientFlagComponent
// ClassId: 5837
// RuntimeId: 43404
// TypeInfo: 0x0000000144CD3F60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientFlagComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientFlagComponent) == 0x90);
}