// Object: ClientWarningSystemComponent
// ClassId: 5912
// RuntimeId: 21133
// TypeInfo: 0x0000000144E392B0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientWarningSystemComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x228];
    }; // 0x260
    static_assert(sizeof(ClientWarningSystemComponent) == 0x260);
}