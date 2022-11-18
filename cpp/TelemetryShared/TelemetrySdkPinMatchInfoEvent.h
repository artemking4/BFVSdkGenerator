// Object: TelemetrySdkPinMatchInfoEvent
// ClassId: 5088
// RuntimeId: 4818
// TypeInfo: 0x0000000144F595E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinMatchInfoEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString diff; // 0x100
        CString mid; // 0x108
        CString goid; // 0x110
        CString player_ps; // 0x118
        CString game_ps; // 0x120
        CString client_type; // 0x128
        CString status; // 0x130
        CString status_code; // 0x138
        CString end_reason; // 0x140
        CString phase; // 0x148
        CString ts_screate; // 0x150
        CString ts_mjoin; // 0x158
        CString ts_mend; // 0x160
        Int32 player_cnt; // 0x168
        Int32 max_players; // 0x16C
        Int32 num_teams; // 0x170
        char pad_0x174[0x4];
        TelemetryShared::RawJsonString teams_stats; // 0x178
        TelemetryShared::RawJsonString player_stats; // 0x180
        CString net_topo; // 0x188
        CString ts_mstart; // 0x190
        Uint32 FieldFlagChanged0; // 0x198
        char pad_0x19C[0x4];
    }; // 0x1A0
    static_assert(sizeof(TelemetrySdkPinMatchInfoEvent) == 0x1A0);
}
#pragma pack(pop)