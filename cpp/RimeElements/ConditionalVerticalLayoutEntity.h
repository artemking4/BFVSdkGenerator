// Object: ConditionalVerticalLayoutEntity
// ClassId: 7088
// RuntimeId: 30150
// TypeInfo: 0x0000000144F28A20
#include "../Entity/Entity.h"

namespace RimeElements {
    class ConditionalVerticalLayoutEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ConditionalVerticalLayoutEntity) == 0x38);
}