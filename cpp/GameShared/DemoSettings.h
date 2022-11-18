// Object: DemoSettings
// ClassId: 1511
// RuntimeId: 9903
// TypeInfo: 0x0000000144E6CFD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class DemoSettings : public Core::DataContainer {
        CString RecordDemoFileName; // 0x18
        CString PlaybackDemoFileName; // 0x20
        CString TimeDemo; // 0x28
        CString LockToPlayerName; // 0x30
        Uint32 ChangePlayerInterval; // 0x38
        Uint32 ForcedDeltaTickCount; // 0x3C
        Uint32 StartProfilingOnFrame; // 0x40
        Uint32 StopProfilingOnFrame; // 0x44
        Uint32 TakeScreenshotOnFrame; // 0x48
        Boolean PauseOnStartup; // 0x4C
        Boolean AllowOverwrite; // 0x4D
        Boolean LogPerformance; // 0x4E
        Boolean SuppressDebugLog; // 0x4F
        Boolean ShutdownOnDemoComplete; // 0x50
        Boolean LoopingDemo; // 0x51
        Boolean LockToRandomPlayer; // 0x52
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(DemoSettings) == 0x58);
}
#pragma pack(pop)