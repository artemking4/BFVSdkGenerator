// Object: ClientTimedFuseComponent
// ClassId: 5901
// RuntimeId: 58670
// TypeInfo: 0x0000000144CCFCE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientTimedFuseComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x18];
    }; // 0x50
    static_assert(sizeof(ClientTimedFuseComponent) == 0x50);
}