// Object: StatContextWriterEntity
// ClassId: 8064
// RuntimeId: 51862
// TypeInfo: 0x0000000144DC5250
#include "../Entity/Entity.h"

namespace DicePersistence {
    class StatContextWriterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(StatContextWriterEntity) == 0x58);
}