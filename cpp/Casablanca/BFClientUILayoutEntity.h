// Object: BFClientUILayoutEntity
// ClassId: 6207
// RuntimeId: 40277
// TypeInfo: 0x0000000144C99A70
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientUILayoutEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BFClientUILayoutEntity) == 0x50);
}