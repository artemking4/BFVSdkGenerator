// Object: ClientSoldierEntity
// ClassId: 7898
// RuntimeId: 56046
// TypeInfo: 0x0000000144F2EF50
#include "../GameClient/ClientCharacterEntity.h"

namespace Soldier {
    class ClientSoldierEntity : public GameClient::ClientCharacterEntity {
        char pad_0x4C8[0x848];
    }; // 0xD10
    static_assert(sizeof(ClientSoldierEntity) == 0xD10);
}