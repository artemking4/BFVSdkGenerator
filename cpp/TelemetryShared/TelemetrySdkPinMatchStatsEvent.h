// Object: TelemetrySdkPinMatchStatsEvent
// ClassId: 5090
// RuntimeId: 39558
// TypeInfo: 0x0000000144F59660
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinMatchStatsEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString trigger; // 0x108
        Uint32 gdur; // 0x110
        Uint32 rdur; // 0x114
        TelemetryShared::RawJsonString match_attr; // 0x118
        TelemetryShared::RawJsonString teams_stats; // 0x120
        TelemetryShared::RawJsonString players_stats; // 0x128
        Uint8 FieldFlagChanged0; // 0x130
        char pad_0x131[0x7];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinMatchStatsEvent) == 0x138);
}
#pragma pack(pop)