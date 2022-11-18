// Object: ServerCreateDistanceManeuverEntity
// ClassId: 7511
// RuntimeId: 64715
// TypeInfo: 0x0000000144BF8A20
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerCreateDistanceManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x20];
    }; // 0x70
    static_assert(sizeof(ServerCreateDistanceManeuverEntity) == 0x70);
}