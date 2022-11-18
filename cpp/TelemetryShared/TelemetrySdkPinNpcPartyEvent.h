// Object: TelemetrySdkPinNpcPartyEvent
// ClassId: 5101
// RuntimeId: 4256
// TypeInfo: 0x0000000144F5A5E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinNpcPartyEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 cdur; // 0x100
        Uint32 gdur; // 0x104
        Uint32 rdur; // 0x108
        char pad_0x10C[0x4];
        CString instance_id; // 0x110
        CString party_id; // 0x118
        CString npc_id; // 0x120
        CString npc_char; // 0x128
        CString npc_class; // 0x130
        Int32 affin; // 0x138
        Int32 max_affin; // 0x13C
        Int32 min_affin; // 0x140
        char pad_0x144[0x4];
        CString status; // 0x148
        Array<CString> members; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinNpcPartyEvent) == 0x160);
}
#pragma pack(pop)