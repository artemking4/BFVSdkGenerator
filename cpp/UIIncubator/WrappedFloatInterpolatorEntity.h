// Object: WrappedFloatInterpolatorEntity
// ClassId: 8282
// RuntimeId: 6990
// TypeInfo: 0x0000000144F6A560
#include "../Entity/Entity.h"

namespace UIIncubator {
    class WrappedFloatInterpolatorEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(WrappedFloatInterpolatorEntity) == 0x80);
}