// Object: DynamicAOComponent
// ClassId: 5756
// RuntimeId: 38315
// TypeInfo: 0x0000000144EC7A30
#include "../Entity/Component.h"

namespace WorldSim {
    class DynamicAOComponent : public Entity::Component {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(DynamicAOComponent) == 0x60);
}