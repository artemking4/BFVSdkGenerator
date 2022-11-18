// Object: SpatialValueEntity
// ClassId: 8048
// RuntimeId: 62429
// TypeInfo: 0x0000000144CD9510
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class SpatialValueEntity : public Entity::SpatialEntity {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(SpatialValueEntity) == 0xD0);
}