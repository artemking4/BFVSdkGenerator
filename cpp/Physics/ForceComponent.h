// Object: ForceComponent
// ClassId: 5764
// RuntimeId: 26645
// TypeInfo: 0x0000000144F12E80
#include "../Entity/Component.h"

namespace Physics {
    class ForceComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ForceComponent) == 0x40);
}