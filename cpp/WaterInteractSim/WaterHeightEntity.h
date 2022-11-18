// Object: WaterHeightEntity
// ClassId: 8055
// RuntimeId: 51680
// TypeInfo: 0x0000000144F72150
#include "../Entity/SpatialEntity.h"

namespace WaterInteractSim {
    class WaterHeightEntity : public Entity::SpatialEntity {
        char pad_0x30[0x20];
    }; // 0x50
    static_assert(sizeof(WaterHeightEntity) == 0x50);
}