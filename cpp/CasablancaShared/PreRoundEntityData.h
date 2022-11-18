// Object: PreRoundEntityData
// ClassId: 3036
// RuntimeId: 64968
// TypeInfo: 0x0000000144D5BE60
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PreRoundEntityData : public Entity::EntityData {
        Int32 RoundMaxPlayerCount; // 0x20
        Int32 RoundMinPlayerCount; // 0x24
        Int32 RoundRestartCountdown; // 0x28
        Int32 RoundLockdownCountdown; // 0x2C
        Boolean EnableStatsOnDisable; // 0x30
        Boolean Enabled; // 0x31
        Boolean PreRoundAllowed; // 0x32
        Boolean OnShutdownReturnToPreRound; // 0x33
        Boolean Ready; // 0x34
        Boolean NeededPlayersReadyCount_TwoTeams; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(PreRoundEntityData) == 0x38);
}
#pragma pack(pop)