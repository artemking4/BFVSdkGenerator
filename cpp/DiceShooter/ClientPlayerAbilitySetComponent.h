// Object: ClientPlayerAbilitySetComponent
// ClassId: 5865
// RuntimeId: 10502
// TypeInfo: 0x0000000144DE18C0
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientPlayerAbilitySetComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xB50];
    }; // 0xB88
    static_assert(sizeof(ClientPlayerAbilitySetComponent) == 0xB88);
}