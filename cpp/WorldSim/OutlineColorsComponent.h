// Object: OutlineColorsComponent
// ClassId: 6101
// RuntimeId: 32663
// TypeInfo: 0x0000000144EC6E30
#include "../Entity/Component.h"

namespace WorldSim {
    class OutlineColorsComponent : public Entity::Component {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(OutlineColorsComponent) == 0x80);
}