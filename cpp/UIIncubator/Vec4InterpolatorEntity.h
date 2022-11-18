// Object: Vec4InterpolatorEntity
// ClassId: 8253
// RuntimeId: 16655
// TypeInfo: 0x0000000144F6A780
#include "../Entity/Entity.h"

namespace UIIncubator {
    class Vec4InterpolatorEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(Vec4InterpolatorEntity) == 0xC0);
}