// Object: ServerSquadStatusEntity
// ClassId: 7730
// RuntimeId: 13349
// TypeInfo: 0x0000000144CE2230
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadStatusEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerSquadStatusEntity) == 0x90);
}