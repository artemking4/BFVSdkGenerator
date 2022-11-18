// Object: ServerSoldierParachuteComponent
// ClassId: 6035
// RuntimeId: 62937
// TypeInfo: 0x0000000144F31380
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierParachuteComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x110];
    }; // 0x148
    static_assert(sizeof(ServerSoldierParachuteComponent) == 0x148);
}