// Object: DebugComponent
// ClassId: 5754
// RuntimeId: 37024
// TypeInfo: 0x0000000144EC6DB0
#include "../Entity/Component.h"

namespace WorldSim {
    class DebugComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(DebugComponent) == 0x30);
}