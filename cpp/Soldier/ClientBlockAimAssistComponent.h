// Object: ClientBlockAimAssistComponent
// ClassId: 5790
// RuntimeId: 45684
// TypeInfo: 0x0000000144F367E0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientBlockAimAssistComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientBlockAimAssistComponent) == 0x40);
}