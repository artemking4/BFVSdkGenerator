// Object: TelemetrySdkPinItemHealthEvent
// ClassId: 5080
// RuntimeId: 48991
// TypeInfo: 0x0000000144F5AB60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinItemHealthEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 item_loc; // 0x110
        Core::Vec3 p_loc; // 0x120
        Core::Vec3 source_loc; // 0x130
        CString item_id; // 0x140
        CString item_category; // 0x148
        CString item_type; // 0x150
        CString p_id; // 0x158
        CString p_type; // 0x160
        CString source_id; // 0x168
        CString source_type; // 0x170
        CString source_item; // 0x178
        Int32 amount; // 0x180
        Int32 health; // 0x184
        CString source_item_cat; // 0x188
        Uint32 FieldFlagChanged0; // 0x190
        Boolean is_heal; // 0x194
        char pad_0x195[0xB];
    }; // 0x1A0
    static_assert(sizeof(TelemetrySdkPinItemHealthEvent) == 0x1A0);
}
#pragma pack(pop)