// Object: EventSplitterEntity
// ClassId: 7161
// RuntimeId: 57617
// TypeInfo: 0x0000000144E4F550
#include "../Entity/Entity.h"

namespace GameCommon {
    class EventSplitterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(EventSplitterEntity) == 0x38);
}