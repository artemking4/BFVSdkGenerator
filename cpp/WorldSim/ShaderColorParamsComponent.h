// Object: ShaderColorParamsComponent
// ClassId: 6152
// RuntimeId: 16945
// TypeInfo: 0x0000000144EC7630
#include "../Entity/Component.h"

namespace WorldSim {
    class ShaderColorParamsComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ShaderColorParamsComponent) == 0x40);
}