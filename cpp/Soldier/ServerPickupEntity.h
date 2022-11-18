// Object: ServerPickupEntity
// ClassId: 7977
// RuntimeId: 10866
// TypeInfo: 0x0000000144F30C90
#include "../GameServer/ServerGameComponentEntity.h"

namespace Soldier {
    class ServerPickupEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x228];
    }; // 0x3A0
    static_assert(sizeof(ServerPickupEntity) == 0x3A0);
}