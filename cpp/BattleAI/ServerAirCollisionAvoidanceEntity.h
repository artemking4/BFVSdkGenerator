// Object: ServerAirCollisionAvoidanceEntity
// ClassId: 7437
// RuntimeId: 14898
// TypeInfo: 0x0000000144BF9080
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAirCollisionAvoidanceEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerAirCollisionAvoidanceEntity) == 0x98);
}