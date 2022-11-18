// Object: EmitterParamComponent
// ClassId: 5758
// RuntimeId: 45437
// TypeInfo: 0x0000000144EC71B0
#include "../Entity/Component.h"

namespace WorldSim {
    class EmitterParamComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(EmitterParamComponent) == 0x30);
}