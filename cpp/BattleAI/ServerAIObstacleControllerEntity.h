// Object: ServerAIObstacleControllerEntity
// ClassId: 7386
// RuntimeId: 64568
// TypeInfo: 0x0000000144BF6BD0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIObstacleControllerEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerAIObstacleControllerEntity) == 0x80);
}