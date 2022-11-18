// Object: BattleAIPathfindingStreamEntity
// ClassId: 6254
// RuntimeId: 5826
// TypeInfo: 0x0000000144BF9DB0
#include "../Entity/Entity.h"

namespace BattleAI {
    class BattleAIPathfindingStreamEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(BattleAIPathfindingStreamEntity) == 0x80);
}