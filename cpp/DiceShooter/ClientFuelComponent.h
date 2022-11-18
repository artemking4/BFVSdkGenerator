// Object: ClientFuelComponent
// ClassId: 5838
// RuntimeId: 45212
// TypeInfo: 0x0000000144DCF2F0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientFuelComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x90];
    }; // 0xC8
    static_assert(sizeof(ClientFuelComponent) == 0xC8);
}