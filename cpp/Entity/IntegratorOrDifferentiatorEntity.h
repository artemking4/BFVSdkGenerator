// Object: IntegratorOrDifferentiatorEntity
// ClassId: 7205
// RuntimeId: 13722
// TypeInfo: 0x0000000144ECCF10
#include "../Entity/Entity.h"

namespace Entity {
    class IntegratorOrDifferentiatorEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(IntegratorOrDifferentiatorEntity) == 0x98);
}