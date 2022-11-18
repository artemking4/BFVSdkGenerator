// Object: TelemetrySdkPinGameObjectiveEvent
// ClassId: 5072
// RuntimeId: 7382
// TypeInfo: 0x0000000144F5ABE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Int32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinGameObjectiveEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        CString objective_id; // 0x120
        Array<CString> reqs; // 0x128
        TelemetryShared::RawJsonString reward; // 0x130
        CString status; // 0x138
        Int32 percent; // 0x140
        char pad_0x144[0x4];
        TelemetryShared::RawJsonString players; // 0x148
        CString type; // 0x150
        CString p_char; // 0x158
        CString p_class; // 0x160
        CString team_id; // 0x168
        CString veh_id; // 0x170
        CString instance_id; // 0x178
        CString objective_guid; // 0x180
        Uint16 FieldFlagChanged0; // 0x188
        char pad_0x18A[0x6];
    }; // 0x190
    static_assert(sizeof(TelemetrySdkPinGameObjectiveEvent) == 0x190);
}
#pragma pack(pop)