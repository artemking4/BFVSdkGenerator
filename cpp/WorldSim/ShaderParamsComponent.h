// Object: ShaderParamsComponent
// ClassId: 6153
// RuntimeId: 30994
// TypeInfo: 0x0000000144EC76B0
#include "../Entity/Component.h"

namespace WorldSim {
    class ShaderParamsComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ShaderParamsComponent) == 0x40);
}