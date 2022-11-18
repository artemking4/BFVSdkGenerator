// Object: ClientBFUIGetTeamPlayersEntity
// ClassId: 6457
// RuntimeId: 51157
// TypeInfo: 0x0000000144CBC320
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetTeamPlayersEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetTeamPlayersEntity) == 0x50);
}