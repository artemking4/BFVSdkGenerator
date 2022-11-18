// Object: ServerWaypointsWalkerEntity
// ClassId: 7789
// RuntimeId: 7608
// TypeInfo: 0x0000000144BFDAC0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerWaypointsWalkerEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerWaypointsWalkerEntity) == 0x90);
}