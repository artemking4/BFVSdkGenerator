// Object: TimelineEntity
// ClassId: 8095
// RuntimeId: 29446
// TypeInfo: 0x0000000144F5FBB0
#include "../Entity/Entity.h"

namespace Timeline {
    class TimelineEntity : public Entity::Entity {
        char pad_0x20[0x3C0];
    }; // 0x3E0
    static_assert(sizeof(TimelineEntity) == 0x3E0);
}