// Object: EventCompareGateEntity
// ClassId: 7156
// RuntimeId: 41399
// TypeInfo: 0x0000000144E4F660
#include "../Entity/Entity.h"

namespace GameCommon {
    class EventCompareGateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(EventCompareGateEntity) == 0x30);
}