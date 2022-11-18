// Object: TelemetrySDK3TransportData
// ClassId: 790
// RuntimeId: 60043
// TypeInfo: 0x0000000144F5E5E0
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySDK3TransportData : public TelemetryShared::TelemetryTransportData {
        Uint32 ProjectId; // 0x28
        char pad_0x2C[0x4];
        CString VersionName; // 0x30
        Int32 logLevel; // 0x38
        Boolean IsProduction; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(TelemetrySDK3TransportData) == 0x40);
}
#pragma pack(pop)