// Object: ServerCoverEntity
// ClassId: 8014
// RuntimeId: 42402
// TypeInfo: 0x0000000144BFD140
#include "../Entity/SpatialEntity.h"

namespace BattleAI {
    class ServerCoverEntity : public Entity::SpatialEntity {
        char pad_0x30[0x18];
    }; // 0x48
    static_assert(sizeof(ServerCoverEntity) == 0x48);
}