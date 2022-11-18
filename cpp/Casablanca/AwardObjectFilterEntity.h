// Object: AwardObjectFilterEntity
// ClassId: 6193
// RuntimeId: 29631
// TypeInfo: 0x0000000144C871F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class AwardObjectFilterEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(AwardObjectFilterEntity) == 0x78);
}