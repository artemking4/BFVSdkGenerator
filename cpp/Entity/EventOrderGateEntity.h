// Object: EventOrderGateEntity
// ClassId: 7158
// RuntimeId: 50188
// TypeInfo: 0x0000000144ED0100
#include "../Entity/Entity.h"

namespace Entity {
    class EventOrderGateEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(EventOrderGateEntity) == 0x90);
}