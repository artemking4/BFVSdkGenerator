// Object: ServerSoldierSteeringComponent
// ClassId: 6037
// RuntimeId: 22990
// TypeInfo: 0x0000000144C40E10
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSoldierSteeringComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ServerSoldierSteeringComponent) == 0x100);
}