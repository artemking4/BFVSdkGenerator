// Object: TelemetrySdkPinMatchJoinEvent
// ClassId: 5089
// RuntimeId: 55755
// TypeInfo: 0x0000000144F59560
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinMatchJoinEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString instance_id; // 0x100
        CString mid; // 0x108
        CString goid; // 0x110
        CString net_topo; // 0x118
        CString client_type; // 0x120
        CString join_method; // 0x128
        CString cxn_tech; // 0x130
        CString status_code; // 0x138
        CString phase; // 0x140
        Uint32 mmdur; // 0x148
        Uint32 max_mmdur; // 0x14C
        Int32 fitscore; // 0x150
        Int32 max_fitscore; // 0x154
        CString scenario; // 0x158
        CString scenario_subsession; // 0x160
        CString scenario_variant; // 0x168
        CString scenario_version; // 0x170
        TelemetryShared::RawJsonString scenario_params; // 0x178
        Array<CString> friend_id; // 0x180
        CString friend_type; // 0x188
        CString server_id; // 0x190
        CString server_name; // 0x198
        CString status; // 0x1A0
        Uint32 FieldFlagChanged0; // 0x1A8
        char pad_0x1AC[0x4];
    }; // 0x1B0
    static_assert(sizeof(TelemetrySdkPinMatchJoinEvent) == 0x1B0);
}
#pragma pack(pop)