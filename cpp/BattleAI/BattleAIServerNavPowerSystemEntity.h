// Object: BattleAIServerNavPowerSystemEntity
// ClassId: 6255
// RuntimeId: 26206
// TypeInfo: 0x0000000144BF0950
#include "../Entity/Entity.h"

namespace BattleAI {
    class BattleAIServerNavPowerSystemEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BattleAIServerNavPowerSystemEntity) == 0x40);
}