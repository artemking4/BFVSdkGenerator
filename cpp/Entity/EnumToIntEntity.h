// Object: EnumToIntEntity
// ClassId: 7148
// RuntimeId: 8030
// TypeInfo: 0x0000000144EDB300
#include "../Entity/EnumLogicEntityWithSingleInput.h"

namespace Entity {
    class EnumToIntEntity : public Entity::EnumLogicEntityWithSingleInput {
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(EnumToIntEntity) == 0x50);
}