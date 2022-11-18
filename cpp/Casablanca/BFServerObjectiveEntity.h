// Object: BFServerObjectiveEntity
// ClassId: 6229
// RuntimeId: 36915
// TypeInfo: 0x0000000144C629B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerObjectiveEntity : public Entity::Entity {
        char pad_0x20[0x200];
    }; // 0x220
    static_assert(sizeof(BFServerObjectiveEntity) == 0x220);
}