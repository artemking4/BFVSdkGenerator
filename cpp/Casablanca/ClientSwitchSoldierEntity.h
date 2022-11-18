// Object: ClientSwitchSoldierEntity
// ClassId: 6881
// RuntimeId: 32991
// TypeInfo: 0x0000000144C56770
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSwitchSoldierEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientSwitchSoldierEntity) == 0x40);
}