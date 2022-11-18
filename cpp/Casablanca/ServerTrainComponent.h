// Object: ServerTrainComponent
// ClassId: 6018
// RuntimeId: 13441
// TypeInfo: 0x0000000144CE9090
#include "../GameServer/ServerChassisComponent.h"

namespace Casablanca {
    class ServerTrainComponent : public GameServer::ServerChassisComponent {
        char pad_0x240[0x100];
    }; // 0x340
    static_assert(sizeof(ServerTrainComponent) == 0x340);
}