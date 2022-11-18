// Object: LogGameEvent
// ClassId: 7236
// RuntimeId: 41317
// TypeInfo: 0x0000000144C8CE90
#include "../Entity/Entity.h"

namespace Casablanca {
    class LogGameEvent : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogGameEvent) == 0x30);
}