// Object: BFServerPlayerEntity
// ClassId: 7939
// RuntimeId: 1845
// TypeInfo: 0x0000000144CE3770
#include "../GameServer/ServerGameComponentEntity.h"

namespace Casablanca {
    class BFServerPlayerEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x148];
    }; // 0x2C0
    static_assert(sizeof(BFServerPlayerEntity) == 0x2C0);
}