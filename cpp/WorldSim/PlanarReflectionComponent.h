// Object: PlanarReflectionComponent
// ClassId: 6148
// RuntimeId: 14424
// TypeInfo: 0x0000000144EC7BB0
#include "../Entity/Component.h"

namespace WorldSim {
    class PlanarReflectionComponent : public Entity::Component {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(PlanarReflectionComponent) == 0x80);
}