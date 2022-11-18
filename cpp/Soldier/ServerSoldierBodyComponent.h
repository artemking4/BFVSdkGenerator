// Object: ServerSoldierBodyComponent
// ClassId: 6031
// RuntimeId: 60389
// TypeInfo: 0x0000000144F32D90
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierBodyComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x198];
    }; // 0x1D0
    static_assert(sizeof(ServerSoldierBodyComponent) == 0x1D0);
}