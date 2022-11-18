// Object: ServerSideToSideManeuverEntity
// ClassId: 7519
// RuntimeId: 7647
// TypeInfo: 0x0000000144BFA850
#include "../BattleAI/ServerDogFightManeuverEntityBase.h"

namespace BattleAI {
    class ServerSideToSideManeuverEntity : public BattleAI::ServerDogFightManeuverEntityBase {
        char pad_0x50[0x10];
    }; // 0x60
    static_assert(sizeof(ServerSideToSideManeuverEntity) == 0x60);
}