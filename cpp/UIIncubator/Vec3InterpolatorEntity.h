// Object: Vec3InterpolatorEntity
// ClassId: 8249
// RuntimeId: 65007
// TypeInfo: 0x0000000144F6A890
#include "../Entity/Entity.h"

namespace UIIncubator {
    class Vec3InterpolatorEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(Vec3InterpolatorEntity) == 0xC0);
}