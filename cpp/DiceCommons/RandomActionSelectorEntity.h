// Object: RandomActionSelectorEntity
// ClassId: 7345
// RuntimeId: 31557
// TypeInfo: 0x0000000144DAAE30
#include "../Entity/Entity.h"

namespace DiceCommons {
    class RandomActionSelectorEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(RandomActionSelectorEntity) == 0xA0);
}