// Object: ClientSoldierSteeringComponent
// ClassId: 5888
// RuntimeId: 21358
// TypeInfo: 0x0000000144C564E0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierSteeringComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientSoldierSteeringComponent) == 0x90);
}