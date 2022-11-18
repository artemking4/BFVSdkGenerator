// Object: EnumPropertyGateEntity
// ClassId: 7147
// RuntimeId: 64459
// TypeInfo: 0x0000000144EDB410
#include "../Entity/EnumLogicEntityWithSingleInput.h"

namespace Entity {
    class EnumPropertyGateEntity : public Entity::EnumLogicEntityWithSingleInput {
        char pad_0x48[0x10];
    }; // 0x58
    static_assert(sizeof(EnumPropertyGateEntity) == 0x58);
}