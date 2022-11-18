// Object: QuadEffectComponent
// ClassId: 6149
// RuntimeId: 61822
// TypeInfo: 0x0000000144EC73B0
#include "../Entity/Component.h"

namespace WorldSim {
    class QuadEffectComponent : public Entity::Component {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(QuadEffectComponent) == 0x60);
}