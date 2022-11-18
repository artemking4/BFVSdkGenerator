// Object: DynamicWaypointsEntity
// ClassId: 7135
// RuntimeId: 39117
// TypeInfo: 0x0000000144C1FA40
#include "../Entity/Entity.h"

namespace Casablanca {
    class DynamicWaypointsEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DynamicWaypointsEntity) == 0x38);
}