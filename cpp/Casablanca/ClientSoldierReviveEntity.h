// Object: ClientSoldierReviveEntity
// ClassId: 6862
// RuntimeId: 5541
// TypeInfo: 0x0000000144C56880
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSoldierReviveEntity : public Entity::Entity {
        char pad_0x20[0x440];
    }; // 0x460
    static_assert(sizeof(ClientSoldierReviveEntity) == 0x460);
}