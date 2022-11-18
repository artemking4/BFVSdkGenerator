// Object: SetCustomizationTagsEntity
// ClassId: 7801
// RuntimeId: 56174
// TypeInfo: 0x0000000144DB0080
#include "../Entity/Entity.h"

namespace DiceCommons {
    class SetCustomizationTagsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SetCustomizationTagsEntity) == 0x30);
}