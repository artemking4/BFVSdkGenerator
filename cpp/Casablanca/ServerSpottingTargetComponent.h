// Object: ServerSpottingTargetComponent
// ClassId: 6043
// RuntimeId: 5529
// TypeInfo: 0x0000000144C3FAF0
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSpottingTargetComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x1C8];
    }; // 0x200
    static_assert(sizeof(ServerSpottingTargetComponent) == 0x200);
}