// Object: ServerAIGlobalStateEntity
// ClassId: 7384
// RuntimeId: 35190
// TypeInfo: 0x0000000144BFC370
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIGlobalStateEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ServerAIGlobalStateEntity) == 0xB8);
}