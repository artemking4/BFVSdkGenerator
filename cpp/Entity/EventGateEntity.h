// Object: EventGateEntity
// ClassId: 7157
// RuntimeId: 9428
// TypeInfo: 0x0000000144ECDAC0
#include "../Entity/Entity.h"

namespace Entity {
    class EventGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(EventGateEntity) == 0x38);
}