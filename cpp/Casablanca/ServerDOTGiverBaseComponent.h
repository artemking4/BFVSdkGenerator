// Object: ServerDOTGiverBaseComponent
// ClassId: 5975
// RuntimeId: 39218
// TypeInfo: 0x0000000144CE9A10
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerDOTGiverBaseComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x548];
    }; // 0x580
    static_assert(sizeof(ServerDOTGiverBaseComponent) == 0x580);
}