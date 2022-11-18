// Object: RandomFloatEntity
// ClassId: 7348
// RuntimeId: 6935
// TypeInfo: 0x0000000144ED0760
#include "../Entity/Entity.h"

namespace Entity {
    class RandomFloatEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RandomFloatEntity) == 0x38);
}