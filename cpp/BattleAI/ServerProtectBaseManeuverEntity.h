// Object: ServerProtectBaseManeuverEntity
// ClassId: 7518
// RuntimeId: 49799
// TypeInfo: 0x0000000144BF8090
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerProtectBaseManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x30];
    }; // 0x80
    static_assert(sizeof(ServerProtectBaseManeuverEntity) == 0x80);
}