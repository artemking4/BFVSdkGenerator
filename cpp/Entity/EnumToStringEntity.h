// Object: EnumToStringEntity
// ClassId: 7149
// RuntimeId: 44371
// TypeInfo: 0x0000000144EDB1F0
#include "../Entity/EnumLogicEntityWithSingleInput.h"

namespace Entity {
    class EnumToStringEntity : public Entity::EnumLogicEntityWithSingleInput {
        char pad_0x48[0x10];
    }; // 0x58
    static_assert(sizeof(EnumToStringEntity) == 0x58);
}