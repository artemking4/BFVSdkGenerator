// Object: BFEncounterSelectableEntity
// ClassId: 6220
// RuntimeId: 7239
// TypeInfo: 0x0000000144C95FC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFEncounterSelectableEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFEncounterSelectableEntity) == 0x38);
}