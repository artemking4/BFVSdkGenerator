// Object: IntToEventEntity
// ClassId: 7204
// RuntimeId: 3251
// TypeInfo: 0x0000000144C96A60
#include "../Entity/Entity.h"

namespace Casablanca {
    class IntToEventEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(IntToEventEntity) == 0x30);
}