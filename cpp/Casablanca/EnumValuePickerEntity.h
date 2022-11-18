// Object: EnumValuePickerEntity
// ClassId: 7152
// RuntimeId: 4568
// TypeInfo: 0x0000000144C96950
#include "../Entity/Entity.h"

namespace Casablanca {
    class EnumValuePickerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(EnumValuePickerEntity) == 0x30);
}