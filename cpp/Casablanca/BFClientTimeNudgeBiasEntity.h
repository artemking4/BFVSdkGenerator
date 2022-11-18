// Object: BFClientTimeNudgeBiasEntity
// ClassId: 6204
// RuntimeId: 38133
// TypeInfo: 0x0000000144C496B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientTimeNudgeBiasEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFClientTimeNudgeBiasEntity) == 0x38);
}