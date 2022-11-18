// Object: RimeLayoutBuilderEntity
// ClassId: 7357
// RuntimeId: 53024
// TypeInfo: 0x0000000144F28E60
#include "../Entity/Entity.h"

namespace RimeElements {
    class RimeLayoutBuilderEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RimeLayoutBuilderEntity) == 0x38);
}