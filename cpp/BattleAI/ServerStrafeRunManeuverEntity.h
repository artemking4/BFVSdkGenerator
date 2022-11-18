// Object: ServerStrafeRunManeuverEntity
// ClassId: 7523
// RuntimeId: 49283
// TypeInfo: 0x0000000144BFA410
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerStrafeRunManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x50];
    }; // 0xA0
    static_assert(sizeof(ServerStrafeRunManeuverEntity) == 0xA0);
}