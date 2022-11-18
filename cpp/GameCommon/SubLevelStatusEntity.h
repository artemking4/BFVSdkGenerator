// Object: SubLevelStatusEntity
// ClassId: 8081
// RuntimeId: 16603
// TypeInfo: 0x0000000144E4C970
#include "../Entity/Entity.h"

namespace GameCommon {
    class SubLevelStatusEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SubLevelStatusEntity) == 0x38);
}