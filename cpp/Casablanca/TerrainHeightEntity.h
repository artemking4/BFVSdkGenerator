// Object: TerrainHeightEntity
// ClassId: 8088
// RuntimeId: 42747
// TypeInfo: 0x0000000144CD92F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class TerrainHeightEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(TerrainHeightEntity) == 0x50);
}