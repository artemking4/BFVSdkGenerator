// Object: ScriptEntity
// ClassId: 7371
// RuntimeId: 5611
// TypeInfo: 0x0000000144EDA030
#include "../Entity/Entity.h"

namespace Entity {
    class ScriptEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ScriptEntity) == 0x58);
}