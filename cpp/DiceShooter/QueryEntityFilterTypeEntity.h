// Object: QueryEntityFilterTypeEntity
// ClassId: 7337
// RuntimeId: 5568
// TypeInfo: 0x0000000144DCC670
#include "../Entity/Entity.h"

namespace DiceShooter {
    class QueryEntityFilterTypeEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(QueryEntityFilterTypeEntity) == 0x38);
}