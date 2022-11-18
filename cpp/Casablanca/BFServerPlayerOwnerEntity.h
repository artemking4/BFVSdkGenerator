// Object: BFServerPlayerOwnerEntity
// ClassId: 6234
// RuntimeId: 10487
// TypeInfo: 0x0000000144CE3CC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerOwnerEntity : public Entity::Entity {
        char pad_0x20[0x128];
    }; // 0x148
    static_assert(sizeof(BFServerPlayerOwnerEntity) == 0x148);
}