// Object: MultiEventGateEntity
// ClassId: 7265
// RuntimeId: 6622
// TypeInfo: 0x0000000144CDA0C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class MultiEventGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(MultiEventGateEntity) == 0x38);
}