// Object: DateTimeMathEntity
// ClassId: 7109
// RuntimeId: 40360
// TypeInfo: 0x0000000144C4A260
#include "../Entity/Entity.h"

namespace Casablanca {
    class DateTimeMathEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(DateTimeMathEntity) == 0x68);
}