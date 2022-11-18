// Object: TerrainSampleStrategyCircleEntity
// ClassId: 8090
// RuntimeId: 2100
// TypeInfo: 0x0000000144DD4970
#include "../Entity/Entity.h"

namespace DiceShooter {
    class TerrainSampleStrategyCircleEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(TerrainSampleStrategyCircleEntity) == 0x40);
}