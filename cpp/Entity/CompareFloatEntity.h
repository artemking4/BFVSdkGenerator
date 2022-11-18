// Object: CompareFloatEntity
// ClassId: 7073
// RuntimeId: 14706
// TypeInfo: 0x0000000144EDC740
#include "../Entity/Entity.h"

namespace Entity {
    class CompareFloatEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(CompareFloatEntity) == 0x78);
}