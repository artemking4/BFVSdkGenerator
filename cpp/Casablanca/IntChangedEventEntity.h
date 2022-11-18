// Object: IntChangedEventEntity
// ClassId: 7200
// RuntimeId: 30705
// TypeInfo: 0x0000000144C970C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class IntChangedEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(IntChangedEventEntity) == 0x48);
}