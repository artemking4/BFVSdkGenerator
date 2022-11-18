// Object: TransformParameterEvent
// ClassId: 8312
// RuntimeId: 39192
// TypeInfo: 0x0000000144E4EA60
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class TransformParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x40];
    }; // 0x50
    static_assert(sizeof(TransformParameterEvent) == 0x50);
}