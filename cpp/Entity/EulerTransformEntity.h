// Object: EulerTransformEntity
// ClassId: 7153
// RuntimeId: 33829
// TypeInfo: 0x0000000144ECEAB0
#include "../Entity/Entity.h"

namespace Entity {
    class EulerTransformEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(EulerTransformEntity) == 0x38);
}