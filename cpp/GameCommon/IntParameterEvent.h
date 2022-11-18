// Object: IntParameterEvent
// ClassId: 8307
// RuntimeId: 55653
// TypeInfo: 0x0000000144E4E8E0
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class IntParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(IntParameterEvent) == 0x18);
}