// Object: StringHubEntity
// ClassId: 8076
// RuntimeId: 55178
// TypeInfo: 0x0000000144ECF440
#include "../Entity/Entity.h"

namespace Entity {
    class StringHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(StringHubEntity) == 0x50);
}