// Object: ParameterizedConsoleCommandTriggerEntity
// ClassId: 7291
// RuntimeId: 13064
// TypeInfo: 0x0000000144DDC840
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ParameterizedConsoleCommandTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ParameterizedConsoleCommandTriggerEntity) == 0x30);
}