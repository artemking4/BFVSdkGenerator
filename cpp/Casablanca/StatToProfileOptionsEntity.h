// Object: StatToProfileOptionsEntity
// ClassId: 8067
// RuntimeId: 27856
// TypeInfo: 0x0000000144CEEA70
#include "../Entity/Entity.h"

namespace Casablanca {
    class StatToProfileOptionsEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(StatToProfileOptionsEntity) == 0x38);
}