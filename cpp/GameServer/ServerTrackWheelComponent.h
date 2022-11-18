// Object: ServerTrackWheelComponent
// ClassId: 5961
// RuntimeId: 14755
// TypeInfo: 0x0000000144E62360
#include "../GameServer/ServerWheelComponent.h"

namespace GameServer {
    class ServerTrackWheelComponent : public GameServer::ServerWheelComponent {
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ServerTrackWheelComponent) == 0x90);
}