// Object: ServerFootprintCollectorEntity
// ClassId: 7557
// RuntimeId: 1815
// TypeInfo: 0x0000000144C3FE10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFootprintCollectorEntity : public Entity::Entity {
        char pad_0x20[0x2B0];
    }; // 0x2D0
    static_assert(sizeof(ServerFootprintCollectorEntity) == 0x2D0);
}