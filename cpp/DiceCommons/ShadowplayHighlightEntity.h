// Object: ShadowplayHighlightEntity
// ClassId: 7804
// RuntimeId: 22058
// TypeInfo: 0x0000000144DAA5B0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ShadowplayHighlightEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ShadowplayHighlightEntity) == 0x30);
}