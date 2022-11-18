// Object: ServerSpinDescentManeuverEntity
// ClassId: 7520
// RuntimeId: 56216
// TypeInfo: 0x0000000144BFA740
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerSpinDescentManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x30];
    }; // 0x80
    static_assert(sizeof(ServerSpinDescentManeuverEntity) == 0x80);
}