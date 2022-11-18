// Object: ClientWaterHitComponent
// ClassId: 5915
// RuntimeId: 42553
// TypeInfo: 0x0000000144DCBC60
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientWaterHitComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ClientWaterHitComponent) == 0x68);
}