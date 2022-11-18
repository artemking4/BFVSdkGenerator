// Object: ClientSpottingTargetComponent
// ClassId: 5894
// RuntimeId: 37523
// TypeInfo: 0x0000000144C21D80
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSpottingTargetComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x108];
    }; // 0x140
    static_assert(sizeof(ClientSpottingTargetComponent) == 0x140);
}