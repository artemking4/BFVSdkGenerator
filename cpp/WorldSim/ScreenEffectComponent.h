// Object: ScreenEffectComponent
// ClassId: 6150
// RuntimeId: 42198
// TypeInfo: 0x0000000144EC7430
#include "../Entity/Component.h"

namespace WorldSim {
    class ScreenEffectComponent : public Entity::Component {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ScreenEffectComponent) == 0x60);
}