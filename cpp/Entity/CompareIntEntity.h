// Object: CompareIntEntity
// ClassId: 7075
// RuntimeId: 1462
// TypeInfo: 0x0000000144EDC850
#include "../Entity/Entity.h"

namespace Entity {
    class CompareIntEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(CompareIntEntity) == 0x88);
}