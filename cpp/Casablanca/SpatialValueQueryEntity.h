// Object: SpatialValueQueryEntity
// ClassId: 8056
// RuntimeId: 18350
// TypeInfo: 0x0000000144CD9400
#include "../Entity/Entity.h"

namespace Casablanca {
    class SpatialValueQueryEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(SpatialValueQueryEntity) == 0xB0);
}