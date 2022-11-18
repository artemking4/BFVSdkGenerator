// Object: TelemetrySdkPinTagEvent
// ClassId: 5140
// RuntimeId: 27633
// TypeInfo: 0x0000000144F59A60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinTagEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 tag_loc; // 0x110
        Core::Vec3 p_loc; // 0x120
        CString tag_type; // 0x130
        CString tag_id; // 0x138
        CString tag_method; // 0x140
        Uint8 FieldFlagChanged0; // 0x148
        char pad_0x149[0x7];
    }; // 0x150
    static_assert(sizeof(TelemetrySdkPinTagEvent) == 0x150);
}
#pragma pack(pop)