// Object: ClientPrivateGamesManageGameEntity
// ClassId: 6813
// RuntimeId: 53516
// TypeInfo: 0x0000000144C920B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesManageGameEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientPrivateGamesManageGameEntity) == 0x80);
}