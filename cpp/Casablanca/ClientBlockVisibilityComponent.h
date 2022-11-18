// Object: ClientBlockVisibilityComponent
// ClassId: 5792
// RuntimeId: 4843
// TypeInfo: 0x0000000144C46450
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientBlockVisibilityComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientBlockVisibilityComponent) == 0x48);
}