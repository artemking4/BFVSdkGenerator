// Object: SkyCelestialRotationComponent
// ClassId: 6157
// RuntimeId: 5546
// TypeInfo: 0x0000000144EC70B0
#include "../Entity/Component.h"

namespace WorldSim {
    class SkyCelestialRotationComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(SkyCelestialRotationComponent) == 0x40);
}