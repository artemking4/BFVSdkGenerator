// Object: StatValueReadAndWriteEntity
// ClassId: 8068
// RuntimeId: 42073
// TypeInfo: 0x0000000144DC4750
#include "../Entity/Entity.h"

namespace DicePersistence {
    class StatValueReadAndWriteEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(StatValueReadAndWriteEntity) == 0x40);
}