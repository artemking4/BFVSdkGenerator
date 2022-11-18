// Object: ServerSupplySphereComponent
// ClassId: 6046
// RuntimeId: 10245
// TypeInfo: 0x0000000144CE8F90
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSupplySphereComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x388];
    }; // 0x3C0
    static_assert(sizeof(ServerSupplySphereComponent) == 0x3C0);
}