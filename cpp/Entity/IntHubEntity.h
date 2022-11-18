// Object: IntHubEntity
// ClassId: 7202
// RuntimeId: 5523
// TypeInfo: 0x0000000144ECF990
#include "../Entity/Entity.h"

namespace Entity {
    class IntHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(IntHubEntity) == 0x50);
}