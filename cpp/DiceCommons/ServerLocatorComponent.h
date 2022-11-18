// Object: ServerLocatorComponent
// ClassId: 6006
// RuntimeId: 62372
// TypeInfo: 0x0000000144DA83B0
#include "../GameServer/ServerGameComponent.h"

namespace DiceCommons {
    class ServerLocatorComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerLocatorComponent) == 0x90);
}