// Object: TelemetrySdkPinItemPickupEvent
// ClassId: 5081
// RuntimeId: 36782
// TypeInfo: 0x0000000144F5AAE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinItemPickupEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 item_loc; // 0x110
        Uint32 item_dur; // 0x120
        char pad_0x124[0x4];
        CString item_id; // 0x128
        CString item_category; // 0x130
        CString item_type; // 0x138
        CString item_name; // 0x140
        Int32 item_pickup_qty; // 0x148
        Int32 item_total_qty; // 0x14C
        CString item_src; // 0x150
        CString src_id; // 0x158
        CString src_id_type; // 0x160
        Uint16 FieldFlagChanged0; // 0x168
        Boolean item_replaced; // 0x16A
        char pad_0x16B[0x5];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinItemPickupEvent) == 0x170);
}
#pragma pack(pop)