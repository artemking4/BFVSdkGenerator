// Object: BFClientPlayerEventEntity
// ClassId: 6199
// RuntimeId: 46341
// TypeInfo: 0x0000000144C8AC60
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientPlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFClientPlayerEventEntity) == 0x38);
}