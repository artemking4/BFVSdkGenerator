// Object: ConditionalPropertyEntity
// ClassId: 7082
// RuntimeId: 64663
// TypeInfo: 0x0000000144DAEB50
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ConditionalPropertyEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ConditionalPropertyEntity) == 0xB0);
}