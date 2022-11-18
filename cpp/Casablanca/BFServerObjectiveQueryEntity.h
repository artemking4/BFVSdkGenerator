// Object: BFServerObjectiveQueryEntity
// ClassId: 6230
// RuntimeId: 25921
// TypeInfo: 0x0000000144C628A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerObjectiveQueryEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(BFServerObjectiveQueryEntity) == 0x58);
}