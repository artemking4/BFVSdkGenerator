// Object: ClientEntityCorrectionInterfaceComponent
// ClassId: 5823
// RuntimeId: 22792
// TypeInfo: 0x0000000144DCB960
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientEntityCorrectionInterfaceComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x20];
    }; // 0x58
    static_assert(sizeof(ClientEntityCorrectionInterfaceComponent) == 0x58);
}