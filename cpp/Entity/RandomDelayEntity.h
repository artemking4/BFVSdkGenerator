// Object: RandomDelayEntity
// ClassId: 7346
// RuntimeId: 31512
// TypeInfo: 0x0000000144ECFDD0
#include "../Entity/Entity.h"

namespace Entity {
    class RandomDelayEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RandomDelayEntity) == 0x38);
}