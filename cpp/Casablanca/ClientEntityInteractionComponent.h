// Object: ClientEntityInteractionComponent
// ClassId: 5824
// RuntimeId: 4760
// TypeInfo: 0x0000000144CD4060
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientEntityInteractionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x918];
    }; // 0x950
    static_assert(sizeof(ClientEntityInteractionComponent) == 0x950);
}