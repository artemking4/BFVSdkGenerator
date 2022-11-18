// Object: ServerAntDrivenComponent
// ClassId: 5948
// RuntimeId: 45918
// TypeInfo: 0x0000000144E5B000
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerAntDrivenComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ServerAntDrivenComponent) == 0x48);
}