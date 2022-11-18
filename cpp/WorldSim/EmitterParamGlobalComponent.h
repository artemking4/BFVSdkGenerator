// Object: EmitterParamGlobalComponent
// ClassId: 5759
// RuntimeId: 31665
// TypeInfo: 0x0000000144EC7130
#include "../Entity/Component.h"

namespace WorldSim {
    class EmitterParamGlobalComponent : public Entity::Component {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(EmitterParamGlobalComponent) == 0x50);
}