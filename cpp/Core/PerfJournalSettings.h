// Object: PerfJournalSettings
// ClassId: 4409
// RuntimeId: 42805
// TypeInfo: 0x0000000144BE3360
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Core {
    class PerfJournalSettings : public Core::DataContainer {
        Int32 JournalSampleInterval; // 0x18
        Int32 JournalFrameCount; // 0x1C
        Float32 AutoJournalThresholdMs; // 0x20
        Int32 AutoJournalMinFrames; // 0x24
        Boolean Enable; // 0x28
        Boolean JournalExpensiveStats; // 0x29
        Boolean JournalAllSPU; // 0x2A
        Boolean JournalReportAverage; // 0x2B
        Boolean AutoJournalEnable; // 0x2C
        Boolean AutoJournalScreenshot; // 0x2D
        Boolean TraceEnable; // 0x2E
        Boolean AutoJournalContinuousCapture; // 0x2F
        Boolean FloatsAlwaysHaveDecimal; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(PerfJournalSettings) == 0x38);
}
#pragma pack(pop)