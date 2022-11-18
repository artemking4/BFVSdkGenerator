// Object: ServerImmelmannManeuverEntity
// ClassId: 7515
// RuntimeId: 11589
// TypeInfo: 0x0000000144BF83C0
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerImmelmannManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x10];
    }; // 0x60
    static_assert(sizeof(ServerImmelmannManeuverEntity) == 0x60);
}