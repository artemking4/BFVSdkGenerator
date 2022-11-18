// Object: EventToIntEntity
// ClassId: 7163
// RuntimeId: 25819
// TypeInfo: 0x0000000144C96B70
#include "../Entity/Entity.h"

namespace Casablanca {
    class EventToIntEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(EventToIntEntity) == 0x38);
}