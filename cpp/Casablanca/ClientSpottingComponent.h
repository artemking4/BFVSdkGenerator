// Object: ClientSpottingComponent
// ClassId: 5893
// RuntimeId: 43008
// TypeInfo: 0x0000000144C21E00
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSpottingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xBDA8];
    }; // 0xBDE0
    static_assert(sizeof(ClientSpottingComponent) == 0xBDE0);
}