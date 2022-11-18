// Object: TelemetrySdkPinTransctionEvent
// ClassId: 5142
// RuntimeId: 47476
// TypeInfo: 0x0000000144F5AEE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinTransctionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString code; // 0x100
        CString type; // 0x108
        CString source; // 0x110
        CString revenue_model; // 0x118
        CString status; // 0x120
        CString status_code; // 0x128
        TelemetryShared::RawJsonString party1id; // 0x130
        TelemetryShared::RawJsonString party2id; // 0x138
        TelemetryShared::RawJsonString asset_out; // 0x140
        TelemetryShared::RawJsonString asset_in; // 0x148
        TelemetryShared::RawJsonString bal1; // 0x150
        TelemetryShared::RawJsonString bal2; // 0x158
        TelemetryShared::RawJsonString _meta; // 0x160
        CString txid; // 0x168
        CString sub_type; // 0x170
        Uint16 FieldFlagChanged0; // 0x178
        char pad_0x17A[0x6];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinTransctionEvent) == 0x180);
}
#pragma pack(pop)