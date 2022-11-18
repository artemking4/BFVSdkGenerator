// Object: ConsoleCommandTriggerEntity
// ClassId: 7091
// RuntimeId: 48826
// TypeInfo: 0x0000000144E4ABC0
#include "../Entity/Entity.h"

namespace GameCommon {
    class ConsoleCommandTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ConsoleCommandTriggerEntity) == 0x30);
}