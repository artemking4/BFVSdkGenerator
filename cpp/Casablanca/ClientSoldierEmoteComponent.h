// Object: ClientSoldierEmoteComponent
// ClassId: 5880
// RuntimeId: 35981
// TypeInfo: 0x0000000144CD3AE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierEmoteComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x140];
    }; // 0x178
    static_assert(sizeof(ClientSoldierEmoteComponent) == 0x178);
}