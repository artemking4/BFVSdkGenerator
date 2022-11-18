// Object: ShuffleIntEntity
// ClassId: 7808
// RuntimeId: 26353
// TypeInfo: 0x0000000144C96730
#include "../Entity/Entity.h"

namespace Casablanca {
    class ShuffleIntEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ShuffleIntEntity) == 0x68);
}