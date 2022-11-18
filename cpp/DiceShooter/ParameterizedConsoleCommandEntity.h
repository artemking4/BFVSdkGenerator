// Object: ParameterizedConsoleCommandEntity
// ClassId: 7290
// RuntimeId: 1848
// TypeInfo: 0x0000000144DDC950
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ParameterizedConsoleCommandEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ParameterizedConsoleCommandEntity) == 0x30);
}