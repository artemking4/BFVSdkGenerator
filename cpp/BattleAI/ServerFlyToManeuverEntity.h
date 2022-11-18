// Object: ServerFlyToManeuverEntity
// ClassId: 7513
// RuntimeId: 49882
// TypeInfo: 0x0000000144BF85E0
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerFlyToManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x80];
    }; // 0xD0
    static_assert(sizeof(ServerFlyToManeuverEntity) == 0xD0);
}