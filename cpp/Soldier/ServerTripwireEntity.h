// Object: ServerTripwireEntity
// ClassId: 7978
// RuntimeId: 14857
// TypeInfo: 0x0000000144F30B80
#include "../GameServer/ServerGameComponentEntity.h"

namespace Soldier {
    class ServerTripwireEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x428];
    }; // 0x5A0
    static_assert(sizeof(ServerTripwireEntity) == 0x5A0);
}