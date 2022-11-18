// Object: LensReflectionComponent
// ClassId: 6095
// RuntimeId: 65254
// TypeInfo: 0x0000000144EC6D30
#include "../Entity/Component.h"

namespace WorldSim {
    class LensReflectionComponent : public Entity::Component {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(LensReflectionComponent) == 0x80);
}