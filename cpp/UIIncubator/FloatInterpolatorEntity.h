// Object: FloatInterpolatorEntity
// ClassId: 7177
// RuntimeId: 1004
// TypeInfo: 0x0000000144F6AAB0
#include "../Entity/Entity.h"

namespace UIIncubator {
    class FloatInterpolatorEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(FloatInterpolatorEntity) == 0x80);
}