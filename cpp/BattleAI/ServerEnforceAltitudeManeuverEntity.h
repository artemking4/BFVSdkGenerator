// Object: ServerEnforceAltitudeManeuverEntity
// ClassId: 7512
// RuntimeId: 15593
// TypeInfo: 0x0000000144BF86F0
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerEnforceAltitudeManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x20];
    }; // 0x70
    static_assert(sizeof(ServerEnforceAltitudeManeuverEntity) == 0x70);
}