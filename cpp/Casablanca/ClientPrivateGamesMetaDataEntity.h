// Object: ClientPrivateGamesMetaDataEntity
// ClassId: 6817
// RuntimeId: 40116
// TypeInfo: 0x0000000144C950B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesMetaDataEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientPrivateGamesMetaDataEntity) == 0x70);
}