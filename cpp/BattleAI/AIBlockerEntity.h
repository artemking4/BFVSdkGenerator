// Object: AIBlockerEntity
// ClassId: 6170
// RuntimeId: 54036
// TypeInfo: 0x0000000144BFDBD0
#include "../Entity/Entity.h"

namespace BattleAI {
    class AIBlockerEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(AIBlockerEntity) == 0x90);
}