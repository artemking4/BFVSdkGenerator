// Object: ServerFlagComponent
// ClassId: 6000
// RuntimeId: 61872
// TypeInfo: 0x0000000144CE9610
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerFlagComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ServerFlagComponent) == 0x70);
}