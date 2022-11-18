// Object: ServerGameComponent
// ClassId: 5922
// RuntimeId: 44265
// TypeInfo: 0x0000000144E58400
#include "../GameCommon/GameComponent.h"

namespace GameServer {
    class ServerGameComponent : public GameCommon::GameComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerGameComponent) == 0x38);
}