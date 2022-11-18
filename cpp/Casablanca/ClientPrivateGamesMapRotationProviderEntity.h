// Object: ClientPrivateGamesMapRotationProviderEntity
// ClassId: 6816
// RuntimeId: 48853
// TypeInfo: 0x0000000144C951C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesMapRotationProviderEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientPrivateGamesMapRotationProviderEntity) == 0xC0);
}