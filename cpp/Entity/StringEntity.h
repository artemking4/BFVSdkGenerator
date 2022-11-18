// Object: StringEntity
// ClassId: 8075
// RuntimeId: 35778
// TypeInfo: 0x0000000144ED99D0
#include "../Entity/Entity.h"

namespace Entity {
    class StringEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(StringEntity) == 0x38);
}