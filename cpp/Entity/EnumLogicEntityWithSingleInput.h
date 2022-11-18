// Object: EnumLogicEntityWithSingleInput
// ClassId: 7146
// RuntimeId: 28586
// TypeInfo: 0x0000000144EDB520
#include "../Entity/Entity.h"

namespace Entity {
    class EnumLogicEntityWithSingleInput : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(EnumLogicEntityWithSingleInput) == 0x48);
}