// Object: ServerAIKillCounterEntity
// ClassId: 7385
// RuntimeId: 49407
// TypeInfo: 0x0000000144BF6CE0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIKillCounterEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerAIKillCounterEntity) == 0x40);
}