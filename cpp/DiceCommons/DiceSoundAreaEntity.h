// Object: DiceSoundAreaEntity
// ClassId: 7113
// RuntimeId: 59405
// TypeInfo: 0x0000000144DA9220
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceSoundAreaEntity : public Entity::Entity {
        char pad_0x20[0x230];
    }; // 0x250
    static_assert(sizeof(DiceSoundAreaEntity) == 0x250);
}