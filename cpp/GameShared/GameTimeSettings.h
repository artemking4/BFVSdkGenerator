// Object: GameTimeSettings
// ClassId: 4992
// RuntimeId: 10529
// TypeInfo: 0x0000000144E6D0D0
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameTimeSettings : public Core::SystemSettings {
        Float32 JoinJobsTimeLimit; // 0x20
        Float32 YieldTimeLimit; // 0x24
        Int32 YieldTime; // 0x28
        Float32 MaxSimFps; // 0x2C
        Uint32 ForceSimRate; // 0x30
        Float32 MaxVariableFps; // 0x34
        Float32 MaxInactiveVariableFps; // 0x38
        Float32 ForceDeltaTime; // 0x3C
        Int32 ForceDeltaTickCount; // 0x40
        Int32 ClampTicks; // 0x44
        Float32 TimeScale; // 0x48
        Float32 DebugFrameDelay; // 0x4C
        Int32 FixedSleepTime; // 0x50
        Boolean UseWaitableTimers; // 0x54
        Boolean DoubleNoTickWait; // 0x55
        Boolean VariableSimTickTimeEnable; // 0x56
        Boolean ForceUseSleepTimer; // 0x57
        Boolean ForceSinglePlayerFixedTick; // 0x58
        Boolean ForceMultiplayerOneTickMin; // 0x59
        Boolean EnableSinglePlayerFixedTick; // 0x5A
        Boolean AlternatingFramesSleepModeEnable; // 0x5B
        Boolean EnableServerJobInterpolation; // 0x5C
        Boolean ClientWaitForServer; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(GameTimeSettings) == 0x60);
}
#pragma pack(pop)