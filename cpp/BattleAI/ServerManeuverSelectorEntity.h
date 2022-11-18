// Object: ServerManeuverSelectorEntity
// ClassId: 7516
// RuntimeId: 35571
// TypeInfo: 0x0000000144BF82B0
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerManeuverSelectorEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x78];
    }; // 0xC8
    static_assert(sizeof(ServerManeuverSelectorEntity) == 0xC8);
}