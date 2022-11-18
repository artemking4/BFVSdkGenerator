// Object: ServerStallTurnManeuverEntity
// ClassId: 7522
// RuntimeId: 16218
// TypeInfo: 0x0000000144BFA520
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerStallTurnManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x30];
    }; // 0x80
    static_assert(sizeof(ServerStallTurnManeuverEntity) == 0x80);
}