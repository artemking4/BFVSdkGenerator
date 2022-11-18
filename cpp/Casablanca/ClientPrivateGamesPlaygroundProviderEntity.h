// Object: ClientPrivateGamesPlaygroundProviderEntity
// ClassId: 6822
// RuntimeId: 33492
// TypeInfo: 0x0000000144C94B60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesPlaygroundProviderEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientPrivateGamesPlaygroundProviderEntity) == 0x68);
}