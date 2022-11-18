// Object: ClientArtilleryAimingComponent
// ClassId: 5787
// RuntimeId: 57987
// TypeInfo: 0x0000000144C46750
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientArtilleryAimingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientArtilleryAimingComponent) == 0x48);
}