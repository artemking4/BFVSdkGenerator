// Object: AngleToTarget
// ClassId: 6186
// RuntimeId: 13994
// TypeInfo: 0x0000000144DA86C0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class AngleToTarget : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(AngleToTarget) == 0x70);
}