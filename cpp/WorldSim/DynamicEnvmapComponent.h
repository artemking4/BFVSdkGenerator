// Object: DynamicEnvmapComponent
// ClassId: 5757
// RuntimeId: 19546
// TypeInfo: 0x0000000144EC7B30
#include "../Entity/Component.h"

namespace WorldSim {
    class DynamicEnvmapComponent : public Entity::Component {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(DynamicEnvmapComponent) == 0x60);
}