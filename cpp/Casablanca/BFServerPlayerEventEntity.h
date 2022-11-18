// Object: BFServerPlayerEventEntity
// ClassId: 6231
// RuntimeId: 27989
// TypeInfo: 0x0000000144CE3BB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFServerPlayerEventEntity) == 0x38);
}