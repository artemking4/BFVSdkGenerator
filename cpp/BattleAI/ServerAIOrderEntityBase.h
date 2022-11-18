// Object: ServerAIOrderEntityBase
// ClassId: 7387
// RuntimeId: 7077
// TypeInfo: 0x0000000144BF5030
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIOrderEntityBase : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAIOrderEntityBase) == 0x30);
}