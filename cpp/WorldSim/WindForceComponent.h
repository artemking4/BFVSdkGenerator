// Object: WindForceComponent
// ClassId: 6165
// RuntimeId: 54383
// TypeInfo: 0x0000000144EC6B30
#include "../Entity/Component.h"

namespace WorldSim {
    class WindForceComponent : public Entity::Component {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(WindForceComponent) == 0xB0);
}