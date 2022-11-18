// Object: ProjectileTrajectoryEntity
// ClassId: 7324
// RuntimeId: 15708
// TypeInfo: 0x0000000144C971D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ProjectileTrajectoryEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ProjectileTrajectoryEntity) == 0x48);
}