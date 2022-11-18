// Object: ServerDriverStaticObjectComponent
// ClassId: 5982
// RuntimeId: 26493
// TypeInfo: 0x0000000144E59800
#include "../GameServer/ServerDriverComponent.h"

namespace GameServer {
    class ServerDriverStaticObjectComponent : public GameServer::ServerDriverComponent {
        char pad_0x1E0[0x150];
    }; // 0x330
    static_assert(sizeof(ServerDriverStaticObjectComponent) == 0x330);
}