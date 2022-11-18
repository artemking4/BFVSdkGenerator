// Object: DateTimeEntity
// ClassId: 7108
// RuntimeId: 17094
// TypeInfo: 0x0000000144C4A370
#include "../Entity/Entity.h"

namespace Casablanca {
    class DateTimeEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(DateTimeEntity) == 0x48);
}