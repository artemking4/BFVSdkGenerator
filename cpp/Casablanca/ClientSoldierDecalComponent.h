// Object: ClientSoldierDecalComponent
// ClassId: 5879
// RuntimeId: 28400
// TypeInfo: 0x0000000144CD3B60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierDecalComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ClientSoldierDecalComponent) == 0x100);
}