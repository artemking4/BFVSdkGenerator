// Object: ClosestPointLineSegment
// ClassId: 7066
// RuntimeId: 6038
// TypeInfo: 0x0000000144DA87D0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClosestPointLineSegment : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClosestPointLineSegment) == 0x70);
}