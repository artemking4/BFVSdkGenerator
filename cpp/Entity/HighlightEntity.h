// Object: HighlightEntity
// ClassId: 7194
// RuntimeId: 26204
// TypeInfo: 0x0000000144ED9480
#include "../Entity/Entity.h"

namespace Entity {
    class HighlightEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(HighlightEntity) == 0x30);
}