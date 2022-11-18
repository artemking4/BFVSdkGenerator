// Object: NetworkCoreSettings
// ClassId: 5000
// RuntimeId: 29054
// TypeInfo: 0x0000000144EA5010
#include "../Core/SystemSettings.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Network {
    class NetworkCoreSettings : public Core::SystemSettings {
        Uint32 DedicatedServerMaxSendJobCount; // 0x20
        Uint32 ServerMaxSendJobCount; // 0x24
        Float32 MaxUnbufferedPacketLatency; // 0x28
        Int32 DamageResendCount; // 0x2C
        Int32 MaxSingleFrameDirtyCastableGhostsCreated; // 0x30
        Int32 MaxSingleFrameDirtyCastableGhostsPendingCreated; // 0x34
    }; // 0x38
    static_assert(sizeof(NetworkCoreSettings) == 0x38);
}
#pragma pack(pop)