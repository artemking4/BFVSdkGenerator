// Object: ObstacleControllerEntity
// ClassId: 7281
// RuntimeId: 32625
// TypeInfo: 0x0000000144EA7710
#include "../Entity/Entity.h"

namespace Pathfinding {
    class ObstacleControllerEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ObstacleControllerEntity) == 0x80);
}