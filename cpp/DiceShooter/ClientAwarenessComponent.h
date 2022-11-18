// Object: ClientAwarenessComponent
// ClassId: 5788
// RuntimeId: 13490
// TypeInfo: 0x0000000144DCBBE0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientAwarenessComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x2F8];
    }; // 0x330
    static_assert(sizeof(ClientAwarenessComponent) == 0x330);
}