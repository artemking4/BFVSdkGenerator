// Object: BoolToEventEntity
// ClassId: 6281
// RuntimeId: 63934
// TypeInfo: 0x0000000144ECD790
#include "../Entity/Entity.h"

namespace Entity {
    class BoolToEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BoolToEventEntity) == 0x38);
}