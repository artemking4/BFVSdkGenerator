// Object: BFStateTransitionInfoEntity
// ClassId: 6243
// RuntimeId: 25246
// TypeInfo: 0x0000000144CCEB20
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFStateTransitionInfoEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFStateTransitionInfoEntity) == 0x38);
}