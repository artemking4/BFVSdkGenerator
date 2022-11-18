// Object: MoveParameterEvent
// ClassId: 8308
// RuntimeId: 48881
// TypeInfo: 0x0000000144E4EAE0
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class MoveParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x180];
    }; // 0x190
    static_assert(sizeof(MoveParameterEvent) == 0x190);
}