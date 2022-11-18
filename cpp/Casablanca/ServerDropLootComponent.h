// Object: ServerDropLootComponent
// ClassId: 5983
// RuntimeId: 58794
// TypeInfo: 0x0000000144CE9810
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerDropLootComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x138];
    }; // 0x170
    static_assert(sizeof(ServerDropLootComponent) == 0x170);
}