// Object: TelemetrySdkPinAccountEvent
// ClassId: 5052
// RuntimeId: 53235
// TypeInfo: 0x0000000144F5C2E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinAccountEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString status_code; // 0x108
        TelemetryShared::RawJsonString acntid; // 0x110
        CString source; // 0x118
        CString reason; // 0x120
        Uint32 duration; // 0x128
        char pad_0x12C[0x4];
        TelemetryShared::RawJsonString metadata; // 0x130
        CString account_type; // 0x138
        Uint8 FieldFlagChanged0; // 0x140
        char pad_0x141[0x7];
    }; // 0x148
    static_assert(sizeof(TelemetrySdkPinAccountEvent) == 0x148);
}
#pragma pack(pop)