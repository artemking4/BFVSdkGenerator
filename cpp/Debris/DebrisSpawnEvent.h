// Object: DebrisSpawnEvent
// ClassId: 8304
// RuntimeId: 29531
// TypeInfo: 0x0000000144DA4CA0
#include "../Entity/EntityEvent.h"

namespace Debris {
    class DebrisSpawnEvent : public Entity::EntityEvent {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(DebrisSpawnEvent) == 0x20);
}