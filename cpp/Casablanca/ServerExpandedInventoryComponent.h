// Object: ServerExpandedInventoryComponent
// ClassId: 5997
// RuntimeId: 19025
// TypeInfo: 0x0000000144CE9690
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerExpandedInventoryComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ServerExpandedInventoryComponent) == 0xA0);
}