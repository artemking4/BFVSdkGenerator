// Object: ClientSoldierSuppressionComponent
// ClassId: 5889
// RuntimeId: 56735
// TypeInfo: 0x0000000144DCF470
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientSoldierSuppressionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xF0];
    }; // 0x128
    static_assert(sizeof(ClientSoldierSuppressionComponent) == 0x128);
}