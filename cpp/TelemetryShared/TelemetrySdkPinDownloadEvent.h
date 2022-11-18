// Object: TelemetrySdkPinDownloadEvent
// ClassId: 5064
// RuntimeId: 34829
// TypeInfo: 0x0000000144F5C260
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinDownloadEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString item_id; // 0x100
        CString item_type; // 0x108
        CString item_platform; // 0x110
        CString status; // 0x118
        Uint32 dur; // 0x120
        char pad_0x124[0x4];
        CString status_code; // 0x128
        Float32 percent; // 0x130
        Int32 download_id; // 0x134
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinDownloadEvent) == 0x140);
}
#pragma pack(pop)