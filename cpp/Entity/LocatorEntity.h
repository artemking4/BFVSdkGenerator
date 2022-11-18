// Object: LocatorEntity
// ClassId: 7996
// RuntimeId: 30672
// TypeInfo: 0x0000000144ED0A90
#include "../Entity/SpatialEntity.h"

namespace Entity {
    class LocatorEntity : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(LocatorEntity) == 0xB0);
}