// Object: MapComponent
// ClassId: 6097
// RuntimeId: 40043
// TypeInfo: 0x0000000144EC6CB0
#include "../Entity/Component.h"

namespace WorldSim {
    class MapComponent : public Entity::Component {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(MapComponent) == 0x40);
}