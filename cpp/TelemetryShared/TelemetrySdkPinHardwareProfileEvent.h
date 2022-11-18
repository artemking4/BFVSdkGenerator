// Object: TelemetrySdkPinHardwareProfileEvent
// ClassId: 5075
// RuntimeId: 16307
// TypeInfo: 0x0000000144F5C160
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinHardwareProfileEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString cpu; // 0x100
        CString sys_mem; // 0x108
        CString gpu; // 0x110
        CString gpu_mem; // 0x118
        CString gpu_id; // 0x120
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinHardwareProfileEvent) == 0x130);
}
#pragma pack(pop)