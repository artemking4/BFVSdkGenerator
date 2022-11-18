// Object: ServerAIStateEntity
// ClassId: 7422
// RuntimeId: 19255
// TypeInfo: 0x0000000144BF47B0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIStateEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerAIStateEntity) == 0x120);
}