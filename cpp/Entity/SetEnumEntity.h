// Object: SetEnumEntity
// ClassId: 7150
// RuntimeId: 38279
// TypeInfo: 0x0000000144EDAFD0
#include "../Entity/EnumLogicEntityWithSingleInput.h"

namespace Entity {
    class SetEnumEntity : public Entity::EnumLogicEntityWithSingleInput {
        char pad_0x48[0x38];
    }; // 0x80
    static_assert(sizeof(SetEnumEntity) == 0x80);
}