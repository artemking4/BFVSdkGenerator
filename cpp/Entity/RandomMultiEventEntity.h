// Object: RandomMultiEventEntity
// ClassId: 7350
// RuntimeId: 34940
// TypeInfo: 0x0000000144ED0870
#include "../Entity/Entity.h"

namespace Entity {
    class RandomMultiEventEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(RandomMultiEventEntity) == 0x50);
}