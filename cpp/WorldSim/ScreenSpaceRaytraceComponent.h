// Object: ScreenSpaceRaytraceComponent
// ClassId: 6151
// RuntimeId: 469
// TypeInfo: 0x0000000144EC7230
#include "../Entity/Component.h"

namespace WorldSim {
    class ScreenSpaceRaytraceComponent : public Entity::Component {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ScreenSpaceRaytraceComponent) == 0xA8);
}