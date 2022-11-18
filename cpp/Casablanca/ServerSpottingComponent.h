// Object: ServerSpottingComponent
// ClassId: 6042
// RuntimeId: 45940
// TypeInfo: 0x0000000144C3FB70
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSpottingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x450];
    }; // 0x488
    static_assert(sizeof(ServerSpottingComponent) == 0x488);
}