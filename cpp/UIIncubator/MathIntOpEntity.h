// Object: MathIntOpEntity
// ClassId: 7258
// RuntimeId: 34204
// TypeInfo: 0x0000000144F6ABC0
#include "../Entity/Entity.h"

namespace UIIncubator {
    class MathIntOpEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(MathIntOpEntity) == 0x40);
}