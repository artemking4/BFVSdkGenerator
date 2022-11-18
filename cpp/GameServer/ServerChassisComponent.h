// Object: ServerChassisComponent
// ClassId: 6017
// RuntimeId: 16488
// TypeInfo: 0x0000000144E62160
#include "../GameServer/ServerPartComponent.h"

namespace GameServer {
    class ServerChassisComponent : public GameServer::ServerPartComponent {
        char pad_0xD8[0x168];
    }; // 0x240
    static_assert(sizeof(ServerChassisComponent) == 0x240);
}