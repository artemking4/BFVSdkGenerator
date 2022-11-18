// Object: DofComponent
// ClassId: 5755
// RuntimeId: 57960
// TypeInfo: 0x0000000144EC78B0
#include "../Entity/Component.h"

namespace WorldSim {
    class DofComponent : public Entity::Component {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(DofComponent) == 0x140);
}