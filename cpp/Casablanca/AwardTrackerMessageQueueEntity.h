// Object: AwardTrackerMessageQueueEntity
// ClassId: 6194
// RuntimeId: 22599
// TypeInfo: 0x0000000144C870E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class AwardTrackerMessageQueueEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(AwardTrackerMessageQueueEntity) == 0x110);
}