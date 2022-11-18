// Object: DelayEntity
// ClassId: 7110
// RuntimeId: 21388
// TypeInfo: 0x0000000144ECFEE0
#include "../Entity/Entity.h"

namespace Entity {
    class DelayEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(DelayEntity) == 0x40);
}