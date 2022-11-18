// Object: ClientPrivateGamesManagePlaygroundEntity
// ClassId: 6814
// RuntimeId: 37507
// TypeInfo: 0x0000000144C91FA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesManagePlaygroundEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientPrivateGamesManagePlaygroundEntity) == 0x88);
}