// Object: WaterOceanSimulationEntity
// ClassId: 8269
// RuntimeId: 16908
// TypeInfo: 0x0000000144F72260
#include "../Entity/Entity.h"

namespace WaterInteractSim {
    class WaterOceanSimulationEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(WaterOceanSimulationEntity) == 0x60);
}