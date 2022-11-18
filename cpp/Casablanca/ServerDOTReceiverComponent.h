// Object: ServerDOTReceiverComponent
// ClassId: 5978
// RuntimeId: 8006
// TypeInfo: 0x0000000144CE9890
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerDOTReceiverComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xB68];
    }; // 0xBA0
    static_assert(sizeof(ServerDOTReceiverComponent) == 0xBA0);
}