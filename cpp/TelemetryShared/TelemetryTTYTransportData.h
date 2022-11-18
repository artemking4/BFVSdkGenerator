// Object: TelemetryTTYTransportData
// ClassId: 792
// RuntimeId: 25202
// TypeInfo: 0x0000000144F5E560
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryTTYTransportData : public TelemetryShared::TelemetryTransportData {
        Uint32 MaxBuffer; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TelemetryTTYTransportData) == 0x30);
}
#pragma pack(pop)