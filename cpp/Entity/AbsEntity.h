// Object: AbsEntity
// ClassId: 6172
// RuntimeId: 54832
// TypeInfo: 0x0000000144ECD350
#include "../Entity/Entity.h"

namespace Entity {
    class AbsEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(AbsEntity) == 0x38);
}