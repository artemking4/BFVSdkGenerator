// Object: EventTypeEntity
// ClassId: 7164
// RuntimeId: 39559
// TypeInfo: 0x0000000144DAE930
#include "../Entity/Entity.h"

namespace DiceCommons {
    class EventTypeEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(EventTypeEntity) == 0x40);
}