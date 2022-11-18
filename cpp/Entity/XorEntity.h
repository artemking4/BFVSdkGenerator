// Object: XorEntity
// ClassId: 8283
// RuntimeId: 18672
// TypeInfo: 0x0000000144ED0ED0
#include "../Entity/Entity.h"

namespace Entity {
    class XorEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(XorEntity) == 0x38);
}