// Object: ServerBasicAttackManeuverEntity
// ClassId: 7508
// RuntimeId: 49344
// TypeInfo: 0x0000000144BF8D50
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerBasicAttackManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x30];
    }; // 0x80
    static_assert(sizeof(ServerBasicAttackManeuverEntity) == 0x80);
}