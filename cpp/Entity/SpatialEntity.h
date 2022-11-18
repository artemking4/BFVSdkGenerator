// Object: SpatialEntity
// ClassId: 7835
// RuntimeId: 8511
// TypeInfo: 0x0000000144EDA250
#include "../Entity/Entity.h"

namespace Entity {
    class SpatialEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SpatialEntity) == 0x30);
}