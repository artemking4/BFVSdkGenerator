// Object: ClientSoldierSkiingComponent
// ClassId: 5886
// RuntimeId: 4329
// TypeInfo: 0x0000000144CD3A60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierSkiingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x1A8];
    }; // 0x1E0
    static_assert(sizeof(ClientSoldierSkiingComponent) == 0x1E0);
}