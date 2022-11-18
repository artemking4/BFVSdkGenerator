// Object: ServerTacticalObjectiveEntity
// ClassId: 7745
// RuntimeId: 23921
// TypeInfo: 0x0000000144E606D0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTacticalObjectiveEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerTacticalObjectiveEntity) == 0x98);
}