// Object: LocalLocatorEntity
// ClassId: 7989
// RuntimeId: 16075
// TypeInfo: 0x0000000144DAE820
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class LocalLocatorEntity : public Entity::SpatialEntity {
        char pad_0x30[0x60];
    }; // 0x90
    static_assert(sizeof(LocalLocatorEntity) == 0x90);
}