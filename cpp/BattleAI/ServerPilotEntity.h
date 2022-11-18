// Object: ServerPilotEntity
// ClassId: 7654
// RuntimeId: 17990
// TypeInfo: 0x0000000144BF81A0
#include "../BattleAI/ServerPilotEntityBase.h"

namespace BattleAI {
    class ServerPilotEntity : public BattleAI::ServerPilotEntityBase {
        char pad_0x30[0x40];
    }; // 0x70
    static_assert(sizeof(ServerPilotEntity) == 0x70);
}