// Object: ServerAIVehicleLevelSetup
// ClassId: 7426
// RuntimeId: 43951
// TypeInfo: 0x0000000144BF3E20
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIVehicleLevelSetup : public Entity::Entity {
        char pad_0x20[0x200];
    }; // 0x220
    static_assert(sizeof(ServerAIVehicleLevelSetup) == 0x220);
}