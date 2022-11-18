// Object: TelemetrySdkPinItemUpgradeEvent
// ClassId: 5084
// RuntimeId: 35019
// TypeInfo: 0x0000000144F5A960
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinItemUpgradeEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 item_loc; // 0x110
        CString item_id; // 0x120
        CString item_category; // 0x128
        CString item_type; // 0x130
        CString item_name; // 0x138
        Uint8 FieldFlagChanged0; // 0x140
        char pad_0x141[0xF];
    }; // 0x150
    static_assert(sizeof(TelemetrySdkPinItemUpgradeEvent) == 0x150);
}
#pragma pack(pop)