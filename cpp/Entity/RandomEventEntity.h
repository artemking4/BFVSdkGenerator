// Object: RandomEventEntity
// ClassId: 7347
// RuntimeId: 43800
// TypeInfo: 0x0000000144ED0980
#include "../Entity/Entity.h"

namespace Entity {
    class RandomEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RandomEventEntity) == 0x38);
}