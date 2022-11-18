// Object: ClientBFUISquadSpawnEntity
// ClassId: 6594
// RuntimeId: 51922
// TypeInfo: 0x0000000144C5A130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISquadSpawnEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUISquadSpawnEntity) == 0x60);
}