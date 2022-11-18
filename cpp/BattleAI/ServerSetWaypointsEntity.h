// Object: ServerSetWaypointsEntity
// ClassId: 7708
// RuntimeId: 46840
// TypeInfo: 0x0000000144BF7F80
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerSetWaypointsEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerSetWaypointsEntity) == 0x40);
}