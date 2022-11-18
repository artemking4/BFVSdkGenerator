// Object: MotionBlurComponent
// ClassId: 6099
// RuntimeId: 22160
// TypeInfo: 0x0000000144EC72B0
#include "../Entity/Component.h"

namespace WorldSim {
    class MotionBlurComponent : public Entity::Component {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(MotionBlurComponent) == 0x50);
}