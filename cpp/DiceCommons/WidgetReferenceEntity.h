// Object: WidgetReferenceEntity
// ClassId: 8277
// RuntimeId: 60958
// TypeInfo: 0x0000000144DA7A30
#include "../Entity/Entity.h"

namespace DiceCommons {
    class WidgetReferenceEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(WidgetReferenceEntity) == 0x60);
}