// Object: ClientShieldComponent
// ClassId: 5874
// RuntimeId: 44961
// TypeInfo: 0x0000000144DCB760
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientShieldComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ClientShieldComponent) == 0x88);
}