// Object: ServerDefensiveManeuverSelectorEntity
// ClassId: 7517
// RuntimeId: 36529
// TypeInfo: 0x0000000144BF8910
#include "../BattleAI/ServerManeuverSelectorEntity.h"

namespace BattleAI {
    class ServerDefensiveManeuverSelectorEntity : public BattleAI::ServerManeuverSelectorEntity {
        char pad_0xC8[0x10];
    }; // 0xD8
    static_assert(sizeof(ServerDefensiveManeuverSelectorEntity) == 0xD8);
}