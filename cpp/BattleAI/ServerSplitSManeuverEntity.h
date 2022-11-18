// Object: ServerSplitSManeuverEntity
// ClassId: 7521
// RuntimeId: 16744
// TypeInfo: 0x0000000144BFA630
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerSplitSManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x40];
    }; // 0x90
    static_assert(sizeof(ServerSplitSManeuverEntity) == 0x90);
}