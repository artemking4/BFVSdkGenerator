// Object: ShadowsComponent
// ClassId: 6155
// RuntimeId: 9981
// TypeInfo: 0x0000000144EC74B0
#include "../Entity/Component.h"

namespace WorldSim {
    class ShadowsComponent : public Entity::Component {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ShadowsComponent) == 0x48);
}