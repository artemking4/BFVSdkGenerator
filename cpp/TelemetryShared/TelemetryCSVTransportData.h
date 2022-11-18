// Object: TelemetryCSVTransportData
// ClassId: 789
// RuntimeId: 31430
// TypeInfo: 0x0000000144F5E4E0
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryCSVTransportData : public TelemetryShared::TelemetryTransportData {
        CString FileName; // 0x28
        Uint32 WritesPerFlush; // 0x30
        Boolean TimeStamped; // 0x34
        Boolean OverwriteFile; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(TelemetryCSVTransportData) == 0x38);
}
#pragma pack(pop)