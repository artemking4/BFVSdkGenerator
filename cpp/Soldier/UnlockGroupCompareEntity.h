// Object: UnlockGroupCompareEntity
// ClassId: 8241
// RuntimeId: 44994
// TypeInfo: 0x0000000144F31480
#include "../Entity/Entity.h"

namespace Soldier {
    class UnlockGroupCompareEntity : public Entity::Entity {
        char pad_0x20[0x240];
    }; // 0x260
    static_assert(sizeof(UnlockGroupCompareEntity) == 0x260);
}