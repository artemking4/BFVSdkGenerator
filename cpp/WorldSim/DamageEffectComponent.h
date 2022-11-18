// Object: DamageEffectComponent
// ClassId: 5753
// RuntimeId: 18364
// TypeInfo: 0x0000000144EC6EB0
#include "../Entity/Component.h"

namespace WorldSim {
    class DamageEffectComponent : public Entity::Component {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(DamageEffectComponent) == 0xA0);
}