// Object: TelemetrySdkPinWishlistEvent
// ClassId: 5150
// RuntimeId: 17768
// TypeInfo: 0x0000000144F5B7E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinWishlistEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString action; // 0x100
        CString item_id_type; // 0x108
        CString item_id; // 0x110
        CString destination; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinWishlistEvent) == 0x128);
}
#pragma pack(pop)