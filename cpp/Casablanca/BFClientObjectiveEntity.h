// Object: BFClientObjectiveEntity
// ClassId: 6198
// RuntimeId: 56859
// TypeInfo: 0x0000000144C499E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientObjectiveEntity : public Entity::Entity {
        char pad_0x20[0x198];
    }; // 0x1B8
    static_assert(sizeof(BFClientObjectiveEntity) == 0x1B8);
}