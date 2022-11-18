// Object: TelemetrySettings
// ClassId: 5032
// RuntimeId: 29103
// TypeInfo: 0x0000000144F5EC60
#include "../Core/SystemSettings.h"
#include "../TelemetryShared/TelemetryStreamFormat.h"
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../TelemetryShared/StreamData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySettings : public Core::SystemSettings {
        Array<TelemetryShared::TelemetryStreamFormat> StreamFormats; // 0x20
        Array<TelemetryShared::TelemetryTransportData> Transports; // 0x28
        Array<TelemetryShared::StreamData> Streams; // 0x30
        CString FileLocation; // 0x38
    }; // 0x40
    static_assert(sizeof(TelemetrySettings) == 0x40);
}
#pragma pack(pop)