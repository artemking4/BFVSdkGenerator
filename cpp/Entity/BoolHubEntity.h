// Object: BoolHubEntity
// ClassId: 6280
// RuntimeId: 8423
// TypeInfo: 0x0000000144ECFAA0
#include "../Entity/Entity.h"

namespace Entity {
    class BoolHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BoolHubEntity) == 0x50);
}