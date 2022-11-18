// Object: TransformInterpolatorEntity
// ClassId: 8103
// RuntimeId: 52786
// TypeInfo: 0x0000000144F6A670
#include "../Entity/Entity.h"

namespace UIIncubator {
    class TransformInterpolatorEntity : public Entity::Entity {
        char pad_0x20[0x1B0];
    }; // 0x1D0
    static_assert(sizeof(TransformInterpolatorEntity) == 0x1D0);
}