// Object: DiceExpressionWrapperEntity
// ClassId: 7112
// RuntimeId: 33629
// TypeInfo: 0x0000000144DD8FE0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class DiceExpressionWrapperEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(DiceExpressionWrapperEntity) == 0xC8);
}