// Object: FloatEntity
// ClassId: 7173
// RuntimeId: 42535
// TypeInfo: 0x0000000144ED9D00
#include "../Entity/Entity.h"

namespace Entity {
    class FloatEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(FloatEntity) == 0x48);
}