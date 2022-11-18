// Object: ClientAimInputComponent
// ClassId: 5780
// RuntimeId: 48105
// TypeInfo: 0x0000000144DCB6E0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientAimInputComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xB8];
    }; // 0xF0
    static_assert(sizeof(ClientAimInputComponent) == 0xF0);
}