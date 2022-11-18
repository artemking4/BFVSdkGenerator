// Object: EventRepeaterEntity
// ClassId: 7160
// RuntimeId: 29921
// TypeInfo: 0x0000000144C8C3F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class EventRepeaterEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(EventRepeaterEntity) == 0x80);
}