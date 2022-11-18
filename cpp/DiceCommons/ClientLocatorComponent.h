// Object: ClientLocatorComponent
// ClassId: 5847
// RuntimeId: 31097
// TypeInfo: 0x0000000144DA9F70
#include "../GameClient/ClientGameComponent.h"

namespace DiceCommons {
    class ClientLocatorComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientLocatorComponent) == 0x48);
}