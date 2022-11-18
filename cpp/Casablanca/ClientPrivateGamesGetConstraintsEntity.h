// Object: ClientPrivateGamesGetConstraintsEntity
// ClassId: 6812
// RuntimeId: 2954
// TypeInfo: 0x0000000144C921C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesGetConstraintsEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientPrivateGamesGetConstraintsEntity) == 0x78);
}