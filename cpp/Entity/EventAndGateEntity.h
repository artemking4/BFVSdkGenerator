// Object: EventAndGateEntity
// ClassId: 7155
// RuntimeId: 51011
// TypeInfo: 0x0000000144ED0210
#include "../Entity/Entity.h"

namespace Entity {
    class EventAndGateEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(EventAndGateEntity) == 0x48);
}