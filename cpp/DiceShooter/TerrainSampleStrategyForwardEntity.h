// Object: TerrainSampleStrategyForwardEntity
// ClassId: 8091
// RuntimeId: 2551
// TypeInfo: 0x0000000144DD4A80
#include "../Entity/Entity.h"

namespace DiceShooter {
    class TerrainSampleStrategyForwardEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(TerrainSampleStrategyForwardEntity) == 0x60);
}