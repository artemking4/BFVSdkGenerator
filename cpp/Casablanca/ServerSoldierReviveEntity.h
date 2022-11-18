// Object: ServerSoldierReviveEntity
// ClassId: 7715
// RuntimeId: 43585
// TypeInfo: 0x0000000144C37AA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSoldierReviveEntity : public Entity::Entity {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(ServerSoldierReviveEntity) == 0x160);
}