// Object: TelemetrySdkPinConnectionEvent
// ClassId: 5060
// RuntimeId: 4978
// TypeInfo: 0x0000000144F594E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinConnectionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString goid; // 0x100
        CString player_ps; // 0x108
        CString target_ip; // 0x110
        CString target_ps; // 0x118
        CString game_ps; // 0x120
        CString net_topo; // 0x128
        CString join_method; // 0x130
        CString client_type; // 0x138
        CString leave_reason; // 0x140
        CString cxn_tech; // 0x148
        Float32 pkt_loss; // 0x150
        Float32 avg_lat; // 0x154
        Float32 max_lat; // 0x158
        char pad_0x15C[0x4];
        CString status; // 0x160
        Uint16 FieldFlagChanged0; // 0x168
        char pad_0x16A[0x6];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinConnectionEvent) == 0x170);
}
#pragma pack(pop)