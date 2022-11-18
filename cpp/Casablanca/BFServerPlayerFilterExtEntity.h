// Object: BFServerPlayerFilterExtEntity
// ClassId: 6233
// RuntimeId: 13264
// TypeInfo: 0x0000000144CE3990
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerFilterExtEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BFServerPlayerFilterExtEntity) == 0x50);
}