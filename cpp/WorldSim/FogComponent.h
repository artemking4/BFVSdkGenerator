// Object: FogComponent
// ClassId: 5763
// RuntimeId: 11561
// TypeInfo: 0x0000000144EC7CB0
#include "../Entity/Component.h"

namespace WorldSim {
    class FogComponent : public Entity::Component {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(FogComponent) == 0xE0);
}