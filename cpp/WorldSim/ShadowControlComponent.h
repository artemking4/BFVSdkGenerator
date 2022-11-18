// Object: ShadowControlComponent
// ClassId: 6154
// RuntimeId: 64029
// TypeInfo: 0x0000000144EC6F30
#include "../Entity/Component.h"

namespace WorldSim {
    class ShadowControlComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ShadowControlComponent) == 0x30);
}