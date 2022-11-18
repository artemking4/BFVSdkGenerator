// Object: TransformEntity
// ClassId: 8101
// RuntimeId: 46565
// TypeInfo: 0x0000000144ED9BF0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(TransformEntity) == 0x38);
}