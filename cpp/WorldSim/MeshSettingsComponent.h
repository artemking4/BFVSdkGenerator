// Object: MeshSettingsComponent
// ClassId: 6098
// RuntimeId: 26040
// TypeInfo: 0x0000000144EC7530
#include "../Entity/Component.h"

namespace WorldSim {
    class MeshSettingsComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(MeshSettingsComponent) == 0x30);
}