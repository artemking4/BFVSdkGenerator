// Object: TrajectoryMoverEntity
// ClassId: 8097
// RuntimeId: 20311
// TypeInfo: 0x0000000144DAA390
#include "../Entity/Entity.h"

namespace DiceCommons {
    class TrajectoryMoverEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(TrajectoryMoverEntity) == 0xB0);
}