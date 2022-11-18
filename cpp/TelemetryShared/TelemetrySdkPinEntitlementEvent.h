// Object: TelemetrySdkPinEntitlementEvent
// ClassId: 5065
// RuntimeId: 4164
// TypeInfo: 0x0000000144F5C1E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Int64.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinEntitlementEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Int64 use_count; // 0x100
        Int64 persona; // 0x108
        Int64 group_id; // 0x110
        Int64 entitlement_id; // 0x118
        Int64 version; // 0x120
        Int64 external_id; // 0x128
        CString product_id; // 0x130
        Int32 project_id; // 0x138
        char pad_0x13C[0x4];
        CString tag; // 0x140
        CString grant_date; // 0x148
        CString termination_date; // 0x150
        CString status; // 0x158
        CString reason_code; // 0x160
        CString source; // 0x168
        CString type; // 0x170
        CString group_name; // 0x178
        CString product_catalog; // 0x180
        CString date_created; // 0x188
        CString date_modified; // 0x190
        CString created_by; // 0x198
        CString modified_by; // 0x1A0
        CString external_type; // 0x1A8
        Int32 origin_permissions; // 0x1B0
        char pad_0x1B4[0x4];
        CString device_id; // 0x1B8
        Uint32 FieldFlagChanged0; // 0x1C0
        Boolean managed_lifecycle; // 0x1C4
        Boolean consumable; // 0x1C5
        char pad_0x1C6[0x2];
    }; // 0x1C8
    static_assert(sizeof(TelemetrySdkPinEntitlementEvent) == 0x1C8);
}
#pragma pack(pop)