// Object: BFClientScreenTransitionEntity
// ClassId: 6202
// RuntimeId: 38205
// TypeInfo: 0x0000000144C498D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientScreenTransitionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFClientScreenTransitionEntity) == 0x38);
}