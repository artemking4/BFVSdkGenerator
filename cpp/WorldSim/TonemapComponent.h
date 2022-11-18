// Object: TonemapComponent
// ClassId: 6162
// RuntimeId: 6340
// TypeInfo: 0x0000000144EC7E30
#include "../Entity/Component.h"

namespace WorldSim {
    class TonemapComponent : public Entity::Component {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(TonemapComponent) == 0x160);
}