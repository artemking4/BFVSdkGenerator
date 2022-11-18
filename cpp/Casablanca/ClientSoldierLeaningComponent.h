// Object: ClientSoldierLeaningComponent
// ClassId: 5883
// RuntimeId: 7248
// TypeInfo: 0x0000000144C56560
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierLeaningComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x90];
    }; // 0xC8
    static_assert(sizeof(ClientSoldierLeaningComponent) == 0xC8);
}