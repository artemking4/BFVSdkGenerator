// Object: ServerImpactWarningComponent
// ClassId: 6004
// RuntimeId: 25857
// TypeInfo: 0x0000000144F32910
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerImpactWarningComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x48];
    }; // 0x80
    static_assert(sizeof(ServerImpactWarningComponent) == 0x80);
}