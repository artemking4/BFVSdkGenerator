// Object: SimpleDofParamConverterEntity
// ClassId: 7810
// RuntimeId: 60812
// TypeInfo: 0x0000000144ECF000
#include "../Entity/Entity.h"

namespace Entity {
    class SimpleDofParamConverterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(SimpleDofParamConverterEntity) == 0x60);
}