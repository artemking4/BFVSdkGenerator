// Object: SpartaGatewaySettings
// ClassId: 5026
// RuntimeId: 38280
// TypeInfo: 0x0000000144F4F940
#include "../Core/SystemSettings.h"
#include "../SpartaShared/SpartaGatewayToOnlineEnvironmentMapping.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaGatewaySettings : public Core::SystemSettings {
        Array<SpartaShared::SpartaGatewayToOnlineEnvironmentMapping> ManifestSettings; // 0x20
        Uint32 ManifestDownloadNumRetries; // 0x28
        char pad_0x2C[0x4];
        CString GatewayHostOverride; // 0x30
        Boolean RemoteManifestFeatureEnabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(SpartaGatewaySettings) == 0x40);
}
#pragma pack(pop)