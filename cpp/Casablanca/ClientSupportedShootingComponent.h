// Object: ClientSupportedShootingComponent
// ClassId: 5898
// RuntimeId: 6307
// TypeInfo: 0x0000000144CD3860
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSupportedShootingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x418];
    }; // 0x450
    static_assert(sizeof(ClientSupportedShootingComponent) == 0x450);
}