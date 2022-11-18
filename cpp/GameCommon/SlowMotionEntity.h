// Object: SlowMotionEntity
// ClassId: 7815
// RuntimeId: 43122
// TypeInfo: 0x0000000144E4FFF0
#include "../Entity/Entity.h"

namespace GameCommon {
    class SlowMotionEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(SlowMotionEntity) == 0x48);
}