// Object: BFServerLevelControlEntity
// ClassId: 7589
// RuntimeId: 20695
// TypeInfo: 0x0000000144C62BD0
#include "../GameServer/ServerLevelControlEntity.h"

namespace Casablanca {
    class BFServerLevelControlEntity : public GameServer::ServerLevelControlEntity {
        char pad_0x80[0x10];
    }; // 0x90
    static_assert(sizeof(BFServerLevelControlEntity) == 0x90);
}