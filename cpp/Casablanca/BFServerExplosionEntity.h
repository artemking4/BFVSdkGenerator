// Object: BFServerExplosionEntity
// ClassId: 7548
// RuntimeId: 33405
// TypeInfo: 0x0000000144C3CA60
#include "../GameServer/ServerExplosionEntity.h"

namespace Casablanca {
    class BFServerExplosionEntity : public GameServer::ServerExplosionEntity {
        char pad_0x180[0x80];
    }; // 0x200
    static_assert(sizeof(BFServerExplosionEntity) == 0x200);
}