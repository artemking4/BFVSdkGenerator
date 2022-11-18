// Object: ServerBreakableModelHealthComponent
// ClassId: 6079
// RuntimeId: 26791
// TypeInfo: 0x0000000144E5E390
#include "../GameServer/ServerGameHealthComponent.h"

namespace GameServer {
    class ServerBreakableModelHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerBreakableModelHealthComponent) == 0x38);
}