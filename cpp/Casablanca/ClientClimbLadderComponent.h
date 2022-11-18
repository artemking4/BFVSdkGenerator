// Object: ClientClimbLadderComponent
// ClassId: 5814
// RuntimeId: 36218
// TypeInfo: 0x0000000144C463D0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientClimbLadderComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x2A8];
    }; // 0x2E0
    static_assert(sizeof(ClientClimbLadderComponent) == 0x2E0);
}