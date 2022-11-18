// Object: ConsoleCommandEntity
// ClassId: 7090
// RuntimeId: 63790
// TypeInfo: 0x0000000144E4ACD0
#include "../Entity/Entity.h"

namespace GameCommon {
    class ConsoleCommandEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ConsoleCommandEntity) == 0x30);
}