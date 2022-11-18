// Object: ServerPhysicsDrivenComponent
// ClassId: 6021
// RuntimeId: 49618
// TypeInfo: 0x0000000144E5AC80
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerPhysicsDrivenComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x128];
    }; // 0x160
    static_assert(sizeof(ServerPhysicsDrivenComponent) == 0x160);
}