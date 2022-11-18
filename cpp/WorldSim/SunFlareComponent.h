// Object: SunFlareComponent
// ClassId: 6161
// RuntimeId: 56337
// TypeInfo: 0x0000000144EC7AB0
#include "../Entity/Component.h"

namespace WorldSim {
    class SunFlareComponent : public Entity::Component {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(SunFlareComponent) == 0x280);
}