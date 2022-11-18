// Object: IndirectSpecularComponent
// ClassId: 6094
// RuntimeId: 63626
// TypeInfo: 0x0000000144EC7FB0
#include "../Entity/Component.h"

namespace WorldSim {
    class IndirectSpecularComponent : public Entity::Component {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(IndirectSpecularComponent) == 0x38);
}