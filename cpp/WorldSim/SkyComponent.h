// Object: SkyComponent
// ClassId: 6159
// RuntimeId: 19970
// TypeInfo: 0x0000000144EC7D30
#include "../Entity/Component.h"

namespace WorldSim {
    class SkyComponent : public Entity::Component {
        char pad_0x20[0x2E0];
    }; // 0x300
    static_assert(sizeof(SkyComponent) == 0x300);
}