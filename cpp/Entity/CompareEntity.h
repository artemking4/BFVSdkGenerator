// Object: CompareEntity
// ClassId: 7071
// RuntimeId: 50579
// TypeInfo: 0x0000000144ECD130
#include "../Entity/Entity.h"

namespace Entity {
    class CompareEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(CompareEntity) == 0x40);
}