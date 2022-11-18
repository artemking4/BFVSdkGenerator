// Object: ResetCounterEntity
// ClassId: 7356
// RuntimeId: 1870
// TypeInfo: 0x0000000144DC5140
#include "../Entity/Entity.h"

namespace DicePersistence {
    class ResetCounterEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ResetCounterEntity) == 0x40);
}