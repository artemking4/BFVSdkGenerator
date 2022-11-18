// Object: ClientAimAssistNodeSnapPointComponent
// ClassId: 5779
// RuntimeId: 44378
// TypeInfo: 0x0000000144F36260
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientAimAssistNodeSnapPointComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientAimAssistNodeSnapPointComponent) == 0x40);
}