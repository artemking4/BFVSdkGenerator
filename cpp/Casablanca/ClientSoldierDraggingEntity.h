// Object: ClientSoldierDraggingEntity
// ClassId: 6859
// RuntimeId: 27651
// TypeInfo: 0x0000000144C56990
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSoldierDraggingEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ClientSoldierDraggingEntity) == 0x140);
}