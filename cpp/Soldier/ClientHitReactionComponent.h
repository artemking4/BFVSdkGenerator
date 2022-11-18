// Object: ClientHitReactionComponent
// ClassId: 5841
// RuntimeId: 27082
// TypeInfo: 0x0000000144F36660
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientHitReactionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x1A8];
    }; // 0x1E0
    static_assert(sizeof(ClientHitReactionComponent) == 0x1E0);
}