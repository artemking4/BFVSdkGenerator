// Object: ServerDogFightingEntity
// ClassId: 7524
// RuntimeId: 24470
// TypeInfo: 0x0000000144BF8800
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerDogFightingEntity : public Entity::Entity {
        char pad_0x20[0x1B0];
    }; // 0x1D0
    static_assert(sizeof(ServerDogFightingEntity) == 0x1D0);
}