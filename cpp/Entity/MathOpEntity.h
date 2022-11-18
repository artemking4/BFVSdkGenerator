// Object: MathOpEntity
// ClassId: 7259
// RuntimeId: 63992
// TypeInfo: 0x0000000144ECD570
#include "../Entity/Entity.h"

namespace Entity {
    class MathOpEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(MathOpEntity) == 0x48);
}