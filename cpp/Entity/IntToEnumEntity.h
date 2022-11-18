// Object: IntToEnumEntity
// ClassId: 7203
// RuntimeId: 30211
// TypeInfo: 0x0000000144EDB0E0
#include "../Entity/Entity.h"

namespace Entity {
    class IntToEnumEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(IntToEnumEntity) == 0x48);
}