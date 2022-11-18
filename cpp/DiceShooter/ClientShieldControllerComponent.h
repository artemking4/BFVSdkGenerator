// Object: ClientShieldControllerComponent
// ClassId: 5875
// RuntimeId: 51567
// TypeInfo: 0x0000000144DCF6F0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientShieldControllerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xC0];
    }; // 0xF8
    static_assert(sizeof(ClientShieldControllerComponent) == 0xF8);
}