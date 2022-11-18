// Object: ServerBasicDefensiveManeuverEntity
// ClassId: 7509
// RuntimeId: 25886
// TypeInfo: 0x0000000144BF8C40
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerBasicDefensiveManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x40];
    }; // 0x90
    static_assert(sizeof(ServerBasicDefensiveManeuverEntity) == 0x90);
}