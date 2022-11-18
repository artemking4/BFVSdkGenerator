// Object: TelemetrySdkPinAchievementEvent
// ClassId: 5053
// RuntimeId: 65481
// TypeInfo: 0x0000000144F5BFE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinAchievementEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString achv_id; // 0x108
        CString instance_id; // 0x110
        TelemetryShared::RawJsonString reqs; // 0x118
        TelemetryShared::RawJsonString reward; // 0x120
        CString status; // 0x128
        Int32 percent; // 0x130
        char pad_0x134[0x4];
        CString diff; // 0x138
        Uint32 tdur; // 0x140
        Uint32 gdur; // 0x144
        Uint32 sdur; // 0x148
        Uint32 cdur; // 0x14C
        CString achv_guid; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinAchievementEvent) == 0x160);
}
#pragma pack(pop)