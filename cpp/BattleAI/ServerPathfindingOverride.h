// Object: ServerPathfindingOverride
// ClassId: 7610
// RuntimeId: 17265
// TypeInfo: 0x0000000144BF9FD0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerPathfindingOverride : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerPathfindingOverride) == 0x40);
}