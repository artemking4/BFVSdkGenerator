// Object: ClientMovementComponent
// ClassId: 5856
// RuntimeId: 34255
// TypeInfo: 0x0000000144F365E0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientMovementComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x2D8];
    }; // 0x310
    static_assert(sizeof(ClientMovementComponent) == 0x310);
}