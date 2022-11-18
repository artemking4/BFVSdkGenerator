// Object: EventQueueEntity
// ClassId: 7159
// RuntimeId: 58648
// TypeInfo: 0x0000000144C8C500
#include "../Entity/Entity.h"

namespace Casablanca {
    class EventQueueEntity : public Entity::Entity {
        char pad_0x20[0x230];
    }; // 0x250
    static_assert(sizeof(EventQueueEntity) == 0x250);
}