// Object: EnlightenComponent
// ClassId: 5760
// RuntimeId: 59552
// TypeInfo: 0x0000000144EC7EB0
#include "../Entity/Component.h"

namespace WorldSim {
    class EnlightenComponent : public Entity::Component {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(EnlightenComponent) == 0xC0);
}