// Object: MapNavigationOverrideEntity
// ClassId: 7255
// RuntimeId: 6281
// TypeInfo: 0x0000000144C9B0E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class MapNavigationOverrideEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(MapNavigationOverrideEntity) == 0x30);
}