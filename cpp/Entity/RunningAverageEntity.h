// Object: RunningAverageEntity
// ClassId: 7365
// RuntimeId: 64598
// TypeInfo: 0x0000000144ECD240
#include "../Entity/Entity.h"

namespace Entity {
    class RunningAverageEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(RunningAverageEntity) == 0x40);
}