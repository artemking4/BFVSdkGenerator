// Object: ServerBFHumanPlayerEntity
// ClassId: 7574
// RuntimeId: 25028
// TypeInfo: 0x0000000144C61F10
#include "../GameServer/ServerHumanPlayerEntity.h"

namespace Casablanca {
    class ServerBFHumanPlayerEntity : public GameServer::ServerHumanPlayerEntity {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerBFHumanPlayerEntity) == 0x38);
}