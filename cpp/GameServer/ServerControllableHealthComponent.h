// Object: ServerControllableHealthComponent
// ClassId: 6080
// RuntimeId: 44484
// TypeInfo: 0x0000000144E59A00
#include "../GameServer/ServerGameHealthComponent.h"

namespace GameServer {
    class ServerControllableHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x18];
    }; // 0x48
    static_assert(sizeof(ServerControllableHealthComponent) == 0x48);
}