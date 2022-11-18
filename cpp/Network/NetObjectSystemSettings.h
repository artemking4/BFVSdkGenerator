// Object: NetObjectSystemSettings
// ClassId: 4350
// RuntimeId: 39428
// TypeInfo: 0x0000000144EA5090
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Network/NetObjectPriorityMethod.h"
#include "../Network/NetObjectPrioritySettings.h"
#include "../Global/Int32.h"
#include "../Network/DeltaCompressionSettings.h"
#include "../Network/NetObjectSystemDebugSettings.h"

#pragma pack(push, 8)
namespace Network {
    class NetObjectSystemSettings : public Core::DataContainer {
        Uint32 MaxNetObjectCount; // 0x18
        Uint32 MaxStaticNetObjectCount; // 0x1C
        Uint32 MaxClientConnectionCount; // 0x20
        Uint32 MaxServerConnectionCount; // 0x24
        Uint32 MaxRemoteAuthorityNetObjectCount; // 0x28
        Network::NetObjectPriorityMethod DefaultDynamicPriorityMethod; // 0x2C
        Network::NetObjectPrioritySettings PrioritySettings; // 0x30
        Int32 DefaultFilterMethod; // 0x54
        Network::NetObjectSystemDebugSettings Debug; // 0x58
        Network::DeltaCompressionSettings DeltaCompressionSettings; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(NetObjectSystemSettings) == 0x68);
}
#pragma pack(pop)