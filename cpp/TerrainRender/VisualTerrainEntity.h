// Object: VisualTerrainEntity
// ClassId: 8262
// RuntimeId: 40089
// TypeInfo: 0x0000000144EB1850
#include "../Entity/Entity.h"

namespace TerrainRender {
    class VisualTerrainEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(VisualTerrainEntity) == 0x58);
}