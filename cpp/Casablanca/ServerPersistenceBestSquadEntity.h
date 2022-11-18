// Object: ServerPersistenceBestSquadEntity
// ClassId: 7611
// RuntimeId: 15424
// TypeInfo: 0x0000000144CE5010
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceBestSquadEntity : public Entity::Entity {
        char pad_0x20[0x550];
    }; // 0x570
    static_assert(sizeof(ServerPersistenceBestSquadEntity) == 0x570);
}