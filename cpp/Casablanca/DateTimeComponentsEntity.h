// Object: DateTimeComponentsEntity
// ClassId: 7107
// RuntimeId: 29456
// TypeInfo: 0x0000000144C4A480
#include "../Entity/Entity.h"

namespace Casablanca {
    class DateTimeComponentsEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(DateTimeComponentsEntity) == 0x78);
}