// Object: VignetteComponent
// ClassId: 6163
// RuntimeId: 24002
// TypeInfo: 0x0000000144EC7830
#include "../Entity/Component.h"

namespace WorldSim {
    class VignetteComponent : public Entity::Component {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(VignetteComponent) == 0x50);
}