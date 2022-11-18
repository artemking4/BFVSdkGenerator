// Object: ServerSoldierDraggingEntity
// ClassId: 7712
// RuntimeId: 63551
// TypeInfo: 0x0000000144C37BB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSoldierDraggingEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerSoldierDraggingEntity) == 0x120);
}