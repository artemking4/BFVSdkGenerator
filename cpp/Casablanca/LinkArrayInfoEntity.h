// Object: LinkArrayInfoEntity
// ClassId: 7213
// RuntimeId: 24215
// TypeInfo: 0x0000000144CCE190
#include "../Entity/Entity.h"

namespace Casablanca {
    class LinkArrayInfoEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(LinkArrayInfoEntity) == 0x38);
}