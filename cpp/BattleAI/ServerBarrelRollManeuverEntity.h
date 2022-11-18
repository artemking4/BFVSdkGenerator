// Object: ServerBarrelRollManeuverEntity
// ClassId: 7507
// RuntimeId: 9078
// TypeInfo: 0x0000000144BF8E60
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerBarrelRollManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x80];
    }; // 0xD0
    static_assert(sizeof(ServerBarrelRollManeuverEntity) == 0xD0);
}