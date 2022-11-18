// Object: TerrainHeightSampleEntity
// ClassId: 8089
// RuntimeId: 9857
// TypeInfo: 0x0000000144DD4B90
#include "../Entity/Entity.h"

namespace DiceShooter {
    class TerrainHeightSampleEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(TerrainHeightSampleEntity) == 0x58);
}