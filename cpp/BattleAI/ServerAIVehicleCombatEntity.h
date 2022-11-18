// Object: ServerAIVehicleCombatEntity
// ClassId: 7425
// RuntimeId: 15275
// TypeInfo: 0x0000000144BF4480
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIVehicleCombatEntity : public Entity::Entity {
        char pad_0x20[0x1A0];
    }; // 0x1C0
    static_assert(sizeof(ServerAIVehicleCombatEntity) == 0x1C0);
}