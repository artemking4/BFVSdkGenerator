// Object: TelemetrySdkPinSequenceEvent
// ClassId: 5136
// RuntimeId: 16986
// TypeInfo: 0x0000000144F59AE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinSequenceEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString category; // 0x100
        CString type; // 0x108
        CString sub_type; // 0x110
        CString instance_id; // 0x118
        Uint32 cdur; // 0x120
        Uint32 gdur; // 0x124
        Uint32 rdur; // 0x128
        char pad_0x12C[0x4];
        CString seq_id; // 0x130
        Float32 seq_dur; // 0x138
        char pad_0x13C[0x4];
        CString status; // 0x140
        CString status_code; // 0x148
        CString view_mode; // 0x150
        Uint32 game_clock; // 0x158
        Uint16 FieldFlagChanged0; // 0x15C
        char pad_0x15E[0x2];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinSequenceEvent) == 0x160);
}
#pragma pack(pop)