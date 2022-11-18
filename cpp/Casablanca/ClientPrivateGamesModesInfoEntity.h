// Object: ClientPrivateGamesModesInfoEntity
// ClassId: 6818
// RuntimeId: 28377
// TypeInfo: 0x0000000144C94FA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesModesInfoEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientPrivateGamesModesInfoEntity) == 0x68);
}