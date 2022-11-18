// Object: ClientPrivateGamesGameSizeProviderEntity
// ClassId: 6811
// RuntimeId: 30907
// TypeInfo: 0x0000000144C922D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesGameSizeProviderEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientPrivateGamesGameSizeProviderEntity) == 0xE0);
}