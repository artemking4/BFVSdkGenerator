// Object: PropertyCastEntity
// ClassId: 7326
// RuntimeId: 9933
// TypeInfo: 0x0000000144ECD680
#include "../Entity/Entity.h"

namespace Entity {
    class PropertyCastEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(PropertyCastEntity) == 0x58);
}