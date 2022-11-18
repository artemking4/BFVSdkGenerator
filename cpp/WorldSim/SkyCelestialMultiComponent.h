// Object: SkyCelestialMultiComponent
// ClassId: 6156
// RuntimeId: 27549
// TypeInfo: 0x0000000144EC6FB0
#include "../Entity/Component.h"

namespace WorldSim {
    class SkyCelestialMultiComponent : public Entity::Component {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(SkyCelestialMultiComponent) == 0xB0);
}