// Object: HealthComponent
// ClassId: 6061
// RuntimeId: 55483
// TypeInfo: 0x0000000144F13000
#include "../Entity/Component.h"

namespace Physics {
    class HealthComponent : public Entity::Component {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(HealthComponent) == 0x28);
}