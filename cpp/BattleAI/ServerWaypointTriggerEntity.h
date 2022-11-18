// Object: ServerWaypointTriggerEntity
// ClassId: 7788
// RuntimeId: 25506
// TypeInfo: 0x0000000144BF9EC0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerWaypointTriggerEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ServerWaypointTriggerEntity) == 0x78);
}