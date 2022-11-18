// Object: ServerFollowWaypointsManeuverEntity
// ClassId: 7514
// RuntimeId: 27031
// TypeInfo: 0x0000000144BF7D60
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerFollowWaypointsManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x40];
    }; // 0x90
    static_assert(sizeof(ServerFollowWaypointsManeuverEntity) == 0x90);
}