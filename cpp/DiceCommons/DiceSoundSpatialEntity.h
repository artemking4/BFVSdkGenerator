// Object: DiceSoundSpatialEntity
// ClassId: 7981
// RuntimeId: 6625
// TypeInfo: 0x0000000144DA9000
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class DiceSoundSpatialEntity : public Entity::SpatialEntity {
        char pad_0x30[0x70];
    }; // 0xA0
    static_assert(sizeof(DiceSoundSpatialEntity) == 0xA0);
}