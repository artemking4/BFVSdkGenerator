// Object: FireEventEntity
// ClassId: 7167
// RuntimeId: 31414
// TypeInfo: 0x0000000144C8C2E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FireEventEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(FireEventEntity) == 0x30);
}