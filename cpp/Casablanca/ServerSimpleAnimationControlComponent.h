// Object: ServerSimpleAnimationControlComponent
// ClassId: 6029
// RuntimeId: 61866
// TypeInfo: 0x0000000144CE9310
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSimpleAnimationControlComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ServerSimpleAnimationControlComponent) == 0x130);
}