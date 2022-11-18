// Object: ServerSoldierSquadInfoEntity
// ClassId: 7716
// RuntimeId: 53629
// TypeInfo: 0x0000000144CEAF50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSoldierSquadInfoEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerSoldierSquadInfoEntity) == 0x50);
}