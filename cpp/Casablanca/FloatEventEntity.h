// Object: FloatEventEntity
// ClassId: 7174
// RuntimeId: 25739
// TypeInfo: 0x0000000144C8C1D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FloatEventEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(FloatEventEntity) == 0x30);
}