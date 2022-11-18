// Object: SpriteDofParamConverterEntity
// ClassId: 8062
// RuntimeId: 13010
// TypeInfo: 0x0000000144ECF110
#include "../Entity/Entity.h"

namespace Entity {
    class SpriteDofParamConverterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(SpriteDofParamConverterEntity) == 0x58);
}