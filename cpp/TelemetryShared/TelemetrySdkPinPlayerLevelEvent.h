// Object: TelemetrySdkPinPlayerLevelEvent
// ClassId: 5119
// RuntimeId: 65046
// TypeInfo: 0x0000000144F5BB60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerLevelEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString instance_id; // 0x108
        CString level; // 0x110
        CString level_name; // 0x118
        Uint32 gdur; // 0x120
        Uint32 sdur; // 0x124
        Uint32 cdur; // 0x128
        Uint32 tdur; // 0x12C
        Uint16 FieldFlagChanged0; // 0x130
        Boolean is_primary; // 0x132
        char pad_0x133[0x5];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinPlayerLevelEvent) == 0x138);
}
#pragma pack(pop)