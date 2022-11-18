// Object: ServerAIParameterEntity
// ClassId: 7391
// RuntimeId: 50081
// TypeInfo: 0x0000000144BF3F30
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIParameterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerAIParameterEntity) == 0x38);
}