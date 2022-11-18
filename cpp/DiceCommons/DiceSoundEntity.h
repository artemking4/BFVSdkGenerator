// Object: DiceSoundEntity
// ClassId: 7114
// RuntimeId: 30591
// TypeInfo: 0x0000000144DA9110
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceSoundEntity : public Entity::Entity {
        char pad_0x20[0x150];
    }; // 0x170
    static_assert(sizeof(DiceSoundEntity) == 0x170);
}