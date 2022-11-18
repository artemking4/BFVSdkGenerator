// Object: TelemetrySdkPinItemDestructionEvent
// ClassId: 5079
// RuntimeId: 24242
// TypeInfo: 0x0000000144F596E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinItemDestructionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString cause; // 0x100
        Uint32 gdur; // 0x108
        char pad_0x10C[0x4];
        TelemetryShared::RawJsonString item_attr; // 0x110
        CString item_id; // 0x118
        CString item_type; // 0x120
        TelemetryShared::RawJsonString k_attr; // 0x128
        CString k_id; // 0x130
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinItemDestructionEvent) == 0x140);
}
#pragma pack(pop)