// Object: SelectEventEntity
// ClassId: 7373
// RuntimeId: 53876
// TypeInfo: 0x0000000144ECFFF0
#include "../Entity/Entity.h"

namespace Entity {
    class SelectEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SelectEventEntity) == 0x38);
}