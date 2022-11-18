// Object: FloatParameterEvent
// ClassId: 8306
// RuntimeId: 46860
// TypeInfo: 0x0000000144E4EB60
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class FloatParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(FloatParameterEvent) == 0x18);
}