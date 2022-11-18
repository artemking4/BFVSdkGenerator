// Object: BattleAIClientNavPowerSystemEntity
// ClassId: 6253
// RuntimeId: 32102
// TypeInfo: 0x0000000144BF9CA0
#include "../Entity/Entity.h"

namespace BattleAI {
    class BattleAIClientNavPowerSystemEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BattleAIClientNavPowerSystemEntity) == 0x40);
}