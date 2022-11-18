// Object: BFRefCountEntity
// ClassId: 6226
// RuntimeId: 45280
// TypeInfo: 0x0000000144C8D0B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFRefCountEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFRefCountEntity) == 0x38);
}