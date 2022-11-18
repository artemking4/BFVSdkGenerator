// Object: VegetationTreeEntity
// ClassId: 8051
// RuntimeId: 9144
// TypeInfo: 0x0000000144EB4850
#include "../Entity/SpatialEntity.h"

namespace Vegetation {
    class VegetationTreeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(VegetationTreeEntity) == 0xB0);
}