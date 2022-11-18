// Object: ClientLockingTargetComponent
// ClassId: 5848
// RuntimeId: 13255
// TypeInfo: 0x0000000144CD3DE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientLockingTargetComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ClientLockingTargetComponent) == 0x68);
}