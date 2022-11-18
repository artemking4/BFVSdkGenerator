// Object: StatContextResetEntity
// ClassId: 8063
// RuntimeId: 49004
// TypeInfo: 0x0000000144DC5360
#include "../Entity/Entity.h"

namespace DicePersistence {
    class StatContextResetEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(StatContextResetEntity) == 0x38);
}