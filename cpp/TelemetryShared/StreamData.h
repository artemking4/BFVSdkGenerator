// Object: StreamData
// ClassId: 768
// RuntimeId: 15830
// TypeInfo: 0x0000000144F5E8E0
#include "../Core/Asset.h"
#include "../TelemetryShared/TelemetryTransportData.h"
#include "../Core/GamePlatform.h"
#include "../Global/Uint32.h"

namespace TelemetryShared {
    class StreamData : public Core::Asset {
        Array<TelemetryShared::TelemetryTransportData> Transports; // 0x20
        Core::GamePlatform Platform; // 0x28
        Uint32 StreamId; // 0x2C
    }; // 0x30
    static_assert(sizeof(StreamData) == 0x30);
}