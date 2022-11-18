// Object: WindComponent
// ClassId: 6164
// RuntimeId: 30166
// TypeInfo: 0x0000000144EC7C30
#include "../Entity/Component.h"

namespace WorldSim {
    class WindComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(WindComponent) == 0x40);
}