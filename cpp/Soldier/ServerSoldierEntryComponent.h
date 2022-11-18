// Object: ServerSoldierEntryComponent
// ClassId: 5992
// RuntimeId: 49197
// TypeInfo: 0x0000000144F32710
#include "../GameServer/ServerCharacterEntryComponent.h"

namespace Soldier {
    class ServerSoldierEntryComponent : public GameServer::ServerCharacterEntryComponent {
        char pad_0xF8[0x28];
    }; // 0x120
    static_assert(sizeof(ServerSoldierEntryComponent) == 0x120);
}