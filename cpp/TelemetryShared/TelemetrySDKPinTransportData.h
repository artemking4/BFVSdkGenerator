// Object: TelemetrySDKPinTransportData
// ClassId: 791
// RuntimeId: 49960
// TypeInfo: 0x0000000144F5E460
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../TelemetryShared/TelemetrySDKPinEndPointConfig.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/TelemetrySDKPinSessionHeaderConfig.h"
#include "../TelemetryShared/TelemetrySDKPinEventHeaderConfig.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySDKPinTransportData : public TelemetryShared::TelemetryTransportData {
        TelemetryShared::TelemetrySDKPinEndPointConfig EndPointConfig; // 0x28
        Int32 logLevel; // 0x40
        char pad_0x44[0x4];
        TelemetryShared::TelemetrySDKPinSessionHeaderConfig SessionHeaderConfig; // 0x48
        TelemetryShared::TelemetrySDKPinEventHeaderConfig EventHeaderConfig; // 0xB8
    }; // 0x168
    static_assert(sizeof(TelemetrySDKPinTransportData) == 0x168);
}
#pragma pack(pop)