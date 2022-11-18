// Object: ServerAIDebugProxy
// ClassId: 7381
// RuntimeId: 33022
// TypeInfo: 0x0000000144BFC7B0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIDebugProxy : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerAIDebugProxy) == 0x58);
}