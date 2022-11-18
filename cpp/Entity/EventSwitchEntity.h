// Object: EventSwitchEntity
// ClassId: 7162
// RuntimeId: 50827
// TypeInfo: 0x0000000144ED0320
#include "../Entity/Entity.h"

namespace Entity {
    class EventSwitchEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(EventSwitchEntity) == 0x38);
}