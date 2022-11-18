// Object: TelemetrySdkPinDialogueSummaryEvent
// ClassId: 5063
// RuntimeId: 45336
// TypeInfo: 0x0000000144F5AD60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinDialogueSummaryEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString conversation; // 0x100
        CString subtitles; // 0x108
        Int32 lines_seen; // 0x110
        Int32 lines_skipped; // 0x114
        Float32 skip_percent; // 0x118
        char pad_0x11C[0x4];
        TelemetryShared::RawJsonString tone; // 0x120
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinDialogueSummaryEvent) == 0x130);
}
#pragma pack(pop)