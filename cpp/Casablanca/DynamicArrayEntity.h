// Object: DynamicArrayEntity
// ClassId: 7131
// RuntimeId: 12618
// TypeInfo: 0x0000000144C1FB50
#include "../Entity/Entity.h"

namespace Casablanca {
    class DynamicArrayEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(DynamicArrayEntity) == 0x40);
}