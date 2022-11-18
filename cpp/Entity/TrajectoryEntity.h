// Object: TrajectoryEntity
// ClassId: 8096
// RuntimeId: 40551
// TypeInfo: 0x0000000144EDCA70
#include "../Entity/Entity.h"

namespace Entity {
    class TrajectoryEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(TrajectoryEntity) == 0x30);
}