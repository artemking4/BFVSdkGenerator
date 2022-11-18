// Object: ClientExpandedInventoryComponent
// ClassId: 5832
// RuntimeId: 54594
// TypeInfo: 0x0000000144CD3FE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientExpandedInventoryComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ClientExpandedInventoryComponent) == 0x88);
}