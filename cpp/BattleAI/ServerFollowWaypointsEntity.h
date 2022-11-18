// Object: ServerFollowWaypointsEntity
// ClassId: 7556
// RuntimeId: 58216
// TypeInfo: 0x0000000144BFA0E0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerFollowWaypointsEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerFollowWaypointsEntity) == 0x60);
}