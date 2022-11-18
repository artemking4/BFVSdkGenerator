// Object: TelemetrySdkPinPlayerEquipEvent
// ClassId: 5115
// RuntimeId: 5622
// TypeInfo: 0x0000000144F5A0E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerEquipEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        TelemetryShared::RawJsonString loadout; // 0x108
        TelemetryShared::RawJsonString prev_loadout; // 0x110
        CString pgid; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinPlayerEquipEvent) == 0x128);
}
#pragma pack(pop)