// Object: ServerSpawnEntity
// ClassId: 8037
// RuntimeId: 51498
// TypeInfo: 0x0000000144E5FE60
#include "../Entity/SpatialEntity.h"

namespace GameServer {
    class ServerSpawnEntity : public Entity::SpatialEntity {
        char pad_0x30[0x348];
    }; // 0x378
    static_assert(sizeof(ServerSpawnEntity) == 0x378);
}