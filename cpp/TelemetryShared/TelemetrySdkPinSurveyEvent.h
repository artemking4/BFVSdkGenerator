// Object: TelemetrySdkPinSurveyEvent
// ClassId: 5139
// RuntimeId: 48974
// TypeInfo: 0x0000000144F5B060
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Int64.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinSurveyEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Int64 qtime; // 0x100
        CString type; // 0x108
        CString status; // 0x110
        CString status_code; // 0x118
        CString survey_id; // 0x120
        Int32 wave_no; // 0x128
        char pad_0x12C[0x4];
        CString lang; // 0x130
        CString complete_flag; // 0x138
        TelemetryShared::RawJsonString json; // 0x140
        Uint16 FieldFlagChanged0; // 0x148
        char pad_0x14A[0x6];
    }; // 0x150
    static_assert(sizeof(TelemetrySdkPinSurveyEvent) == 0x150);
}
#pragma pack(pop)