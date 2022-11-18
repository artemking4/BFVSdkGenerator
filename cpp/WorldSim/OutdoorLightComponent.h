// Object: OutdoorLightComponent
// ClassId: 6100
// RuntimeId: 36200
// TypeInfo: 0x0000000144EC7F30
#include "../Entity/Component.h"

namespace WorldSim {
    class OutdoorLightComponent : public Entity::Component {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(OutdoorLightComponent) == 0x180);
}