// Object: EncounterTypeCompareEntity
// ClassId: 7137
// RuntimeId: 33771
// TypeInfo: 0x0000000144CE2FC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class EncounterTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(EncounterTypeCompareEntity) == 0x30);
}