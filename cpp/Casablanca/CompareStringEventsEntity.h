// Object: CompareStringEventsEntity
// ClassId: 7078
// RuntimeId: 44383
// TypeInfo: 0x0000000144CCE7F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class CompareStringEventsEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(CompareStringEventsEntity) == 0x48);
}