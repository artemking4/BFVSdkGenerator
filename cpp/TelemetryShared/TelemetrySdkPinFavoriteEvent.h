// Object: TelemetrySdkPinFavoriteEvent
// ClassId: 5067
// RuntimeId: 16302
// TypeInfo: 0x0000000144F5BE60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinFavoriteEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type1; // 0x100
        CString type1_id; // 0x108
        CString type1_name; // 0x110
        CString type2; // 0x118
        CString type2_id; // 0x120
        CString type2_name; // 0x128
        Uint8 FieldFlagChanged0; // 0x130
        char pad_0x131[0x7];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinFavoriteEvent) == 0x138);
}
#pragma pack(pop)