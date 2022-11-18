// Object: UIFloatThrottleEntity
// ClassId: 8173
// RuntimeId: 54527
// TypeInfo: 0x0000000144C1F710
#include "../Entity/Entity.h"

namespace Casablanca {
    class UIFloatThrottleEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(UIFloatThrottleEntity) == 0x48);
}