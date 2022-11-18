// Object: ClientSupplySphereComponent
// ClassId: 5897
// RuntimeId: 31953
// TypeInfo: 0x0000000144CD38E0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSupplySphereComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ClientSupplySphereComponent) == 0x70);
}