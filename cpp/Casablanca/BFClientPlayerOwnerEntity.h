// Object: BFClientPlayerOwnerEntity
// ClassId: 6201
// RuntimeId: 30407
// TypeInfo: 0x0000000144C8AD70
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientPlayerOwnerEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(BFClientPlayerOwnerEntity) == 0xB0);
}