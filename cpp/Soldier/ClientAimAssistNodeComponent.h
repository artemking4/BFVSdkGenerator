// Object: ClientAimAssistNodeComponent
// ClassId: 5778
// RuntimeId: 56804
// TypeInfo: 0x0000000144F36860
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientAimAssistNodeComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x440];
    }; // 0x478
    static_assert(sizeof(ClientAimAssistNodeComponent) == 0x478);
}