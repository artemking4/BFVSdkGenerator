// Object: QueryResultPlayerInspectorEntity
// ClassId: 7338
// RuntimeId: 31803
// TypeInfo: 0x0000000144DCC560
#include "../Entity/Entity.h"

namespace DiceShooter {
    class QueryResultPlayerInspectorEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(QueryResultPlayerInspectorEntity) == 0x50);
}