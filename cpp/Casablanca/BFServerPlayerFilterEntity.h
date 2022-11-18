// Object: BFServerPlayerFilterEntity
// ClassId: 6232
// RuntimeId: 37865
// TypeInfo: 0x0000000144CE3AA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BFServerPlayerFilterEntity) == 0x30);
}