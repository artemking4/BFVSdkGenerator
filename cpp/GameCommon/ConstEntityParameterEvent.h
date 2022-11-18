// Object: ConstEntityParameterEvent
// ClassId: 8303
// RuntimeId: 59274
// TypeInfo: 0x0000000144E4EBE0
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class ConstEntityParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(ConstEntityParameterEvent) == 0x18);
}