// Object: ServerAIFirePatternEntity
// ClassId: 7383
// RuntimeId: 49379
// TypeInfo: 0x0000000144BFC480
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIFirePatternEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerAIFirePatternEntity) == 0x60);
}