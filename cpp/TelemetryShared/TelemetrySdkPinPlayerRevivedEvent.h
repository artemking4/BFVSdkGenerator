// Object: TelemetrySdkPinPlayerRevivedEvent
// ClassId: 5122
// RuntimeId: 63092
// TypeInfo: 0x0000000144F5A260
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerRevivedEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 alive_dur; // 0x100
        Uint32 downed_dur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 source_loc; // 0x120
        CString downed_action; // 0x130
        Uint32 gdur; // 0x138
        char pad_0x13C[0x4];
        CString p_class; // 0x140
        TelemetryShared::RawJsonString p_attr; // 0x148
        CString source_class; // 0x150
        CString source_id; // 0x158
        CString source_item; // 0x160
        CString source_item_cat; // 0x168
        CString source_type; // 0x170
        Uint16 FieldFlagChanged0; // 0x178
        char pad_0x17A[0x6];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinPlayerRevivedEvent) == 0x180);
}
#pragma pack(pop)