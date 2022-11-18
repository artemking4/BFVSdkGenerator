// Object: ClientBFUIGetSoldierEntity
// ClassId: 6444
// RuntimeId: 58576
// TypeInfo: 0x0000000144CC1C70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldierEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetSoldierEntity) == 0x58);
}