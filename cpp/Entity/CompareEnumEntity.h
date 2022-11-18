// Object: CompareEnumEntity
// ClassId: 7072
// RuntimeId: 63707
// TypeInfo: 0x0000000144EDB740
#include "../Entity/Entity.h"

namespace Entity {
    class CompareEnumEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(CompareEnumEntity) == 0x70);
}