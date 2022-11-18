// Object: ServerEntryComponent
// ClassId: 5990
// RuntimeId: 53277
// TypeInfo: 0x0000000144E59980
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerEntryComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xC0];
    }; // 0xF8
    static_assert(sizeof(ServerEntryComponent) == 0xF8);
}