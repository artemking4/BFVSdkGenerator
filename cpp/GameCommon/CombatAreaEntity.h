// Object: CombatAreaEntity
// ClassId: 7068
// RuntimeId: 11852
// TypeInfo: 0x0000000144E4D420
#include "../Entity/Entity.h"

namespace GameCommon {
    class CombatAreaEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(CombatAreaEntity) == 0x48);
}