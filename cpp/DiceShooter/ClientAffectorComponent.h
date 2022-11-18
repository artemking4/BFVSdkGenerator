// Object: ClientAffectorComponent
// ClassId: 5777
// RuntimeId: 8599
// TypeInfo: 0x0000000144DD63A0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientAffectorComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x178];
    }; // 0x1B0
    static_assert(sizeof(ClientAffectorComponent) == 0x1B0);
}