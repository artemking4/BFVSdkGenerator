// Object: DakarPreRoundEntityData
// ClassId: 2579
// RuntimeId: 53429
// TypeInfo: 0x0000000144D50450
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarPreRoundEntityData : public Entity::EntityData {
        Int32 RoundMaxPlayerCount; // 0x20
        Int32 RoundMinPlayerCount; // 0x24
        Int32 RoundRestartCountdown; // 0x28
        Int32 RoundLockdownCountdown; // 0x2C
        Uint32 SkipTimerPlayerCount; // 0x30
        Uint32 SkipTimerCountdown; // 0x34
        Boolean EnableStatsOnDisable; // 0x38
        Boolean Enabled; // 0x39
        Boolean OnShutdownReturnToPreRound; // 0x3A
        Boolean Ready; // 0x3B
        Boolean ShouldSkipTimer; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(DakarPreRoundEntityData) == 0x40);
}
#pragma pack(pop)