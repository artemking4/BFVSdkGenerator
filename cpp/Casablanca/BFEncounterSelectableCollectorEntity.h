// Object: BFEncounterSelectableCollectorEntity
// ClassId: 6219
// RuntimeId: 19162
// TypeInfo: 0x0000000144C961E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFEncounterSelectableCollectorEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(BFEncounterSelectableCollectorEntity) == 0x70);
}