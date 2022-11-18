// Object: LensScopeComponent
// ClassId: 6096
// RuntimeId: 1350
// TypeInfo: 0x0000000144EC7730
#include "../Entity/Component.h"

namespace WorldSim {
    class LensScopeComponent : public Entity::Component {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(LensScopeComponent) == 0x80);
}