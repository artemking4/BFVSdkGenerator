// Object: AntiAliasComponent
// ClassId: 5747
// RuntimeId: 16995
// TypeInfo: 0x0000000144EC6C30
#include "../Entity/Component.h"

namespace WorldSim {
    class AntiAliasComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(AntiAliasComponent) == 0x30);
}