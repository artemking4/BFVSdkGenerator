// Object: LocalizedStringIdPickerEntity
// ClassId: 7235
// RuntimeId: 57028
// TypeInfo: 0x0000000144DA88E0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LocalizedStringIdPickerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(LocalizedStringIdPickerEntity) == 0x40);
}