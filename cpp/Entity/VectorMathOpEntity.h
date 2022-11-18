// Object: VectorMathOpEntity
// ClassId: 8258
// RuntimeId: 63752
// TypeInfo: 0x0000000144ECD460
#include "../Entity/Entity.h"

namespace Entity {
    class VectorMathOpEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(VectorMathOpEntity) == 0x60);
}