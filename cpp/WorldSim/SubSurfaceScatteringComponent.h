// Object: SubSurfaceScatteringComponent
// ClassId: 6160
// RuntimeId: 1795
// TypeInfo: 0x0000000144EC7930
#include "../Entity/Component.h"

namespace WorldSim {
    class SubSurfaceScatteringComponent : public Entity::Component {
        char pad_0x20[0x180];
    }; // 0x1A0
    static_assert(sizeof(SubSurfaceScatteringComponent) == 0x1A0);
}