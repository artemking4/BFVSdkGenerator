// Object: ServerCollisionAvoidanceManeuverEntity
// ClassId: 7510
// RuntimeId: 42095
// TypeInfo: 0x0000000144BF8B30
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerCollisionAvoidanceManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x30];
    }; // 0x80
    static_assert(sizeof(ServerCollisionAvoidanceManeuverEntity) == 0x80);
}