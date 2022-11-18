// Object: TransformMultiplierEntity
// ClassId: 8105
// RuntimeId: 44739
// TypeInfo: 0x0000000144ECF220
#include "../Entity/Entity.h"

namespace Entity {
    class TransformMultiplierEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(TransformMultiplierEntity) == 0x58);
}