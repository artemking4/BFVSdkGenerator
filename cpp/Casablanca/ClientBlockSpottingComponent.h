// Object: ClientBlockSpottingComponent
// ClassId: 5791
// RuntimeId: 11474
// TypeInfo: 0x0000000144C464D0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientBlockSpottingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientBlockSpottingComponent) == 0x40);
}