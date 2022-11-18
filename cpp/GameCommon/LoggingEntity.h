// Object: LoggingEntity
// ClassId: 7237
// RuntimeId: 58315
// TypeInfo: 0x0000000144E4B380
#include "../Entity/Entity.h"

namespace GameCommon {
    class LoggingEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(LoggingEntity) == 0xB0);
}