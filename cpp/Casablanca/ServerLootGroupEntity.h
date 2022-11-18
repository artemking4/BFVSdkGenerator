// Object: ServerLootGroupEntity
// ClassId: 8027
// RuntimeId: 29429
// TypeInfo: 0x0000000144C396D0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerLootGroupEntity : public Entity::SpatialEntity {
        char pad_0x30[0x160];
    }; // 0x190
    static_assert(sizeof(ServerLootGroupEntity) == 0x190);
}