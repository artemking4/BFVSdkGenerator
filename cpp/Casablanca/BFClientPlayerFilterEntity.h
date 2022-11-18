// Object: BFClientPlayerFilterEntity
// ClassId: 6200
// RuntimeId: 16448
// TypeInfo: 0x0000000144C8AB50
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFClientPlayerFilterEntity) == 0x38);
}