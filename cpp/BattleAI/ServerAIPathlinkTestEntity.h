// Object: ServerAIPathlinkTestEntity
// ClassId: 7418
// RuntimeId: 54015
// TypeInfo: 0x0000000144BF4AE0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIPathlinkTestEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAIPathlinkTestEntity) == 0x30);
}