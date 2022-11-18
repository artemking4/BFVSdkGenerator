// Object: TelemetryTransportData
// ClassId: 788
// RuntimeId: 34794
// TypeInfo: 0x0000000144F5E660
#include "../Core/Asset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryTransportData : public Core::Asset {
        Uint32 TransportId; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TelemetryTransportData) == 0x28);
}
#pragma pack(pop)