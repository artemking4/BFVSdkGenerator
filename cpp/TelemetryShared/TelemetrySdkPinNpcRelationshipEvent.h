// Object: TelemetrySdkPinNpcRelationshipEvent
// ClassId: 5102
// RuntimeId: 11982
// TypeInfo: 0x0000000144F5A560
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinNpcRelationshipEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 cdur; // 0x100
        Uint32 gdur; // 0x104
        Uint32 rdur; // 0x108
        char pad_0x10C[0x4];
        CString instance_id; // 0x110
        CString npc_id; // 0x118
        CString npc_char; // 0x120
        CString npc_class; // 0x128
        Int32 amount; // 0x130
        Int32 affin; // 0x134
        Int32 max_affin; // 0x138
        Int32 min_affin; // 0x13C
        CString choice_id; // 0x140
        Uint16 FieldFlagChanged0; // 0x148
        char pad_0x14A[0x6];
    }; // 0x150
    static_assert(sizeof(TelemetrySdkPinNpcRelationshipEvent) == 0x150);
}
#pragma pack(pop)